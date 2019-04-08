




void Swap (char *str, char *FindWord, char *SwapWord){

 int j,s,k,i=0,SwapWordLength,yc,FindWordLength,n; 

 char *p1,*p2;

 p1=str; 

 p2=FindWord; 

 yc=strlen(str);   

 FindWordLength=strlen(FindWord); 

 SwapWordLength=strlen(SwapWord);  

 n=SwapWordLength-FindWordLength; 

 while(*p1!='\0'){

   if((*p1==*p2)&&(!isalpha(*(p1-1)))) 

   while((*p1==*p2)&&(*p2!='\0')) 

   { p1++; p2++; i++; }   

  else { p1++; i++; } 

  if((*p2=='\0')&&(isalpha(*p1)==0)){ 

 

   if(n<0){ 

    j=i-FindWordLength;  

    for(k=0; k<SwapWordLength; k++) 

     str[j++]=SwapWord[k]; 

    for(s=i; s<yc; s++) 

     str[j++]=str[s]; 

    while(j<yc) 

     str[j++]='\0'; 

     yc=strlen(str); 

    i+=n; 

    p1+=n; 

   } 

   else 

   { 

    for(s=yc+n; s>i; s--) 

     str[s]=str[yc--]; 

    j=i-FindWordLength; 

    for(k=0; k<SwapWordLength; k++) 

     str[j++]=SwapWord[k]; 

    yc=strlen(str); 

    i+=n; 

    p1+=n; 

   } 

  } 

  p2=FindWord; 

 } 

} 

int main(){

 char sen[MAX],old[LEN],a[LEN];

 gets(sen);

 gets(old);

 gets(a);

 Swap(sen,old,a);

 puts(sen);
 return 0;

}

