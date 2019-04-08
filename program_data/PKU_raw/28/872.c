int main()
{
 char s[6000];
 char tem[100];
 int i=0; 
 int m,p,j;
 p=0;
 gets(s);
 int t;
  t=strlen(s);
 for (m=0;m<t+1;m++){
  if(s[m]!=' '&&s[m]!='\0'){
   tem[i]=s[m];
   i++;
  }
  else {
   if(p==0){
      tem[i]='\0';
   printf("%d",strlen(tem));
   i=0;
   p=1;
   for (j=m+1;;j++){
	   if (s[j]!=' '){
		   m=j-1;
		   break;
	   }
   }
   }
   else { 
   tem[i]='\0';
   printf(",%d",strlen(tem));
   i=0;
   for (j=m+1;;j++){
	   if (s[j]!=' '){
		   m=j-1;
		   break;
	   }
   }
   }
  }
  }
  return 0;
 } 
