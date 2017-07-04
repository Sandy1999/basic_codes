word=raw_input("\n Enter a String to Be Coded\n");
rev=""
vowels='aeiou';
r=len(word);
for i in range(r-1,-1,-1):
   if(word[i]) not in vowels:   
      rev+=word[i];
print rev;
