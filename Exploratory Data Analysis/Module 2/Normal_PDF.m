
% Normal Probability Density Function

x = linspace(-10,10,100);
x=x(1:100);
u=1;    
sig=2; 
sig_sqr=power(sig, 2);


frac=1/sqrt(2*pi*sig_sqr);

powr =-(power((x-u),2)/(2*sig_sqr) );


f = frac * powr;

plot(x,f); grid; xlabel("x"); ylabel("f");
