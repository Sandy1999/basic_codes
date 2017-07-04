import random;
b=1;
h=0;
t=0;
while(b<=100):
 a=random.randrange(2);
 if(a==0):
    h+=1;
 else:
    t+=1;
 b+=1; 
print"number of tails are:",t,"\n Number of heads are:",h;
 