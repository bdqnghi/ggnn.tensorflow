void Input (char *a, char *b, char *c){
gets(a);
gets(b);
gets(c);
}
void Swap (char *str, char *FindWord, char *SwapWord){
 int j,s,k,i=0,SwapWordLength,strLength,FindWordLength,n; 
 char *p1,*p2;
 p1=str; 
 p2=FindWord; 
 strLength=strlen(str);
 FindWordLength=strlen(FindWord);  
 SwapWordLength=strlen(SwapWord); 
 n=SwapWordLength-FindWordLength; 
 while(*p1!='\0'){
   if(*p1==*p2)
   while((*p1==*p2)&&(*p2!='\0')) 
   { p1++; p2++; i++; }   
  else { p1++; i++; } 
  if(*p2=='\0'&&(*(p1-FindWordLength-1)==' '||i-FindWordLength-2<0)){ 
   if(n<0){
    j=i-FindWordLength;
    for(k=0; k<SwapWordLength; k++) 
     str[j++]=SwapWord[k];
    for(s=i; s<strLength; s++) 
     str[j++]=str[s]; 
    while(j<strLength) 
     str[j++]='\0'; 
    strLength=strlen(str); 
    i+=n; 
    p1+=n; 
   } 
   else 
   { 
    for(s=strLength+n; s>i; s--) 
     str[s]=str[strLength--];
    j=i-FindWordLength; 
    for(k=0; k<SwapWordLength; k++) 
     str[j++]=SwapWord[k]; 
    strLength=strlen(str); 
    i+=n; 
    p1+=n; 
   } 
  } 
  p2=FindWord; 
 } 
} 
void main(){
 char sen[MAX],old[LEN],new[LEN];
 Input(sen,old,new);
 Swap(sen,old,new);
 puts(sen);
}