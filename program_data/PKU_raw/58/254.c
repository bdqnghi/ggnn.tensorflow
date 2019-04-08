int main()
{
 int n,i,j,k,l;
 char s[1000][100];
 scanf("%d",&n);
 for(i=0;i<=n;i++)
  gets(s[i]);
 for(i=1;i<=n;i++)
 {
  k=0;
  l=strlen(s[i]);
  if(s[i][0]<='9'&&s[i][0]>='0')
   printf("0\n");
  else
  { 
   for(j=0;j<l;j++)
   {
    if(s[i][j]>='a'&&s[i][j]<='z'||s[i][j]>='A'&&s[i][j]<='Z'||s[i][j]>='0'&&s[i][j]<='9'||s[i][j]=='_')
      k=0;
    else
    {
     k=1;
     printf("0\n");   
     break;    
    }                  
   }                
   if(k==0)
    printf("1\n"); 
  } 
 }    
 getchar();
 getchar();
 return 0;
}
