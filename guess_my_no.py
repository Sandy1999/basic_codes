import random;

print"\tWelcome to Guess My number game"
print"\t\t This is just a stimulator and number is between 1 to 100 "
print"\t Guess it in minimum attempts as possible"

the_num=random.randrange(100)+1;
b=0;
tries=1
guess= int(raw_input("Enter your Number:"));
while(guess!=the_num):
   if(guess>the_num):
      print"Little Lower"
   elif(guess<the_num):
      print"little Higher"
   guess= int(raw_input("Take a guess:"));
   tries+=1;
   if(tries>4):
     print"Sorry You cant make it.";
     break; 

if(tries<5):
   print"Congratulations you got the correct guess","\n You took only",tries,"tries";
print"The Correct Number is:",the_num; 
