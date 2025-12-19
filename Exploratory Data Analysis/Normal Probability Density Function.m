
% Normal Probability Density Function

x = [-10:0.2:10];

sig=2;
sig_sqr=sig*sig;
u=0;

frac=1/sqrt(2*pi*sig_sqr);

exp_vect=-(power((x-u),2)/(2*sig_sqr) );

f = frac * exp_vect;

plot(x,f); grid; xlabel("x"); ylabel("f");
