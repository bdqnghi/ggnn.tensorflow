int main()
{
 char str[1000],word[300][20];
 int i,j=0,k=0,num[300];
 gets(str);
 for(i=0;i<strlen(str);i++)
 {
  if(str[i]!=' ')
  {
   word[j][k]=str[i];
      k++;
  }
  else
  {
   word[j][k]='\0';
   j++;
   k=0;
   while(true){
    if ( str[i+1] == ' ')
     i++;
    else
     break;
   }
  }
 }
 word[j][k]='\0';  
 j++;
 for(i=0;i<j;i++)
 {
  num[i]=strlen(word[i]);
 }
 printf("%d",num[0]);
 for(i=1;i<j;i++)
 {
  printf(",%d",num[i]);
 }
 return 0;
}
