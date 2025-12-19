function setupExploratoryDataAnalysis
% 
% setupExploratoryDataAnalysis downloads data for this course.
% 

distributedDataURL = "https://www.mathworks.com/supportfiles/" + ... 
            "practicaldsmatlab/weather_events/StormEvents.zip";
[~,distributedDataZipFolderName,ext] = fileparts(distributedDataURL); 
distributedDataZipName = distributedDataZipFolderName + ext; 

% If the zip file does not contain a folder (only files) then we need to 
% create a data folder inside the location of this script. Set the variable
% below to be a non-empty string. E.g., distributedDataZipFolderName. 
distributedDataFolderName = ""; 

% Add the appropritae string argument for each required documentation
% example to the string array below. Define empty array if none. 
docExamples = [ 
    % BicycleCounts.csv
    "matlab/SwarmchartMLCMarkerTypeExample"; 
    % humanactivity.mat
    "stats/CodeGenerationForIncrementalLearningExample";  
];
% Choose a folder for any documentation examples. 
docExamplesDataFolderName = "Auxiliary Data"; 




%% ----------EVERYTHING BELOW THIS LINE IS GENERAL PURPOSE----------------

% Get the location of this file 
[fileFolder,~,~] = fileparts(mfilename('fullpath'));

% Get absolute paths to setup files & folders
distributedDataZip = fullfile(fileFolder,distributedDataZipName);
distributedDataFolder = fullfile(fileFolder,distributedDataFolderName); 
docExamplesDataFolder = fullfile(fileFolder,docExamplesDataFolderName); 

disp("Setup location: """ + fileFolder + """")
%% 
% Check if the zip file already exists. If it does not, try downloading it. 
% If it does, skip to unzip. 

if isempty(dir(distributedDataZip))
    disp("Downloading """ + distributedDataZipName + """...")
    try
        websave(distributedDataZip,distributedDataURL);
    catch ME % Error on download failure
        fprintf("Failed\n");
        
        % Delete any possibly corrupt zip file 
        cleanUpOnError(distributedDataZip)

        errorMsg = ME.message;
        error("The setup could not be completed. The file """ + ...
            distributedDataZipName + """ could not be downloaded. " + ...
            "(""" + errorMsg + """)");
    end
end

%% 
% Try to unzip the data zip 

disp("Extracting """ + distributedDataZipName + """...")
try
    unzip(distributedDataZip,distributedDataFolder); 
catch ME
    disp("Failed")
    % Delete the zip file 
    disp("Deleting """ + distributedDataZip + """")
    cleanUpOnError(distributedDataZip) 
 
    % Show error
    errorMsg = ME.message;
    error("The setup could not be completed because the file " + ...
        """" + distributedDataZip + """ could not be unzipped, and " + ...
        "has been deleted. Rerun the setup script to redownload the " + ...
        "zip file and try again. (" + errorMsg + ")");
end

% Check if there are documentation example files to download. (An empty
% string array indicates there are none.) 
% Additonaly check if the download is necessary (release R2023a or newer)
if ~isempty(docExamples) && ~isMATLABReleaseOlderThan("R2023a")   
%% 
% Check if the documentation example data folder already exists. 
% If it does not, create it  
% If it does, skip to downloading documentation data files. 

if ~exist(docExamplesDataFolder,'dir')
    try 
        mkdir(docExamplesDataFolder);
    catch ME % Error creating documentation examples data folder
        disp("Failed"); 

        errorMsg = ME.message;
        error("The setup could not be completed. The folder """ + ...
            docExamplesDataFolder + """ could not be created. " + ...
            "(""" + errorMsg + """)");
    end
end

%% 
% Try to fill the documentation examples data folder 

disp("Downloading additional data files to """ + ...
    docExamplesDataFolderName + """...")
try
    for exIdx = 1:length(docExamples)
        % Download the files for each example to the specified folder
        evalc("setupExample(docExamples(exIdx),docExamplesDataFolder)");
    end
    % Remove the extra code files that come with documentation examples 
    delete(fullfile(docExamplesDataFolder,"*.mlx")) 
    delete(fullfile(docExamplesDataFolder,"*.m")) 

catch ME
    fprintf("Failed\n")
    % Delete the folder  
    disp("Deleting """ + docExamplesDataFolder + """")
    cleanUpOnError(docExamplesDataFolder) 
 
    % Show error
    errorMsg = ME.message;
    error("The setup could not be completed. An error occurred " + ...
        "while adding files to """ + docExamplesDataFolder + """ " + ...
        "(" + errorMsg + "). Rerun this setup script to try again. ");
end

end

% Add the folders to the path and save it
disp("Updating path...")
addpath(genpath(fileFolder)); 
savepath; 

[~,wId] = lastwarn; 
if isequal(wId,'MATLAB:SavePath:PathNotSaved')
    disp("Setup completed. Updated path could not be saved.")
    docLink = '"https://www.mathworks.com/help/matlab/ref/savepath.html"'; 
    disp(['Try running <a href = ',docLink,'>savepath</a> manually.'])
    disp("If you cannot resolve the issue, reach out to your instructors.")
else
    disp("Setup completed.")
end
disp(newline)


end % function setupExploratoryDataAnalysis

%% Error clean up function
function cleanUpOnError(toDelete)
    if ~isempty(dir(toDelete))
        try
            if isfolder(toDelete)
                rmdir(toDelete,'s')
            else
                delete(toDelete); 
            end
        catch 
            warning("""" + toDelete +  """ could not be deleted." + ... 
                " Manually delete it before running " + ...
                "this setup script again.") 
        end
    end        
end




%% 
% _Copyright 2023 The MathWorks, Inc._