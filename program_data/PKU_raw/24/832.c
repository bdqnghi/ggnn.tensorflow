int main()
{
 char danci[50][50];
 char str[500];
 char *p;

 int changdu[50],e,n=0,a,l,k;
 gets(str);
 
 p=str;
 for(a=0;a<50;a++){
   
  while(*p==' ')//????????????
	  p++;


  k=0;
  while(*p!=' '&& *p!='\0')
  {
    danci[a][k]=*p;  
	k++;
	p++;
  }
  danci[a][k]='\0';

  changdu[a]=strlen(danci[a]);

    if(*p=='\0')
	  break;//???????????????????danci?


 }


n=a+1;

 for(int k=1;k<=n;k++){
  for(int i=0;i<n-k;i++){
   if(changdu[i]>changdu[i+1]){
    e=changdu[i+1];
    changdu[i+1]=changdu[i];
    changdu[i]=e;
   }
  }
 }

  for(int t=0;t<n;t++){
  l=strlen(danci[t]);
  if(changdu[n-1]==l){
   printf("%s\n",danci[t]);
   break;
  }
 }

 for (int q=0;q<n;q++){
  l=strlen(danci[q]);
  if(changdu[0]==l){
   printf("%s\n",danci[q]);
   break;
  }
 }

 return 0;
}