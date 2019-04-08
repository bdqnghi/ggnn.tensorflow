int main()
{
 int j,i,n,l,t=0;
 char s[10000][20];
 scanf("%d",&n);
 for(i=0;i<n;i++)
  scanf("%s",&s[i]);
 for(i=0;i<n;i++)
 {
  l=strlen(s[i]);               
  if((s[i][0]>='a'&&s[i][0]<='z')||(s[i][0]>='A'&&s[i][0]<='Z')||s[i][0]=='_')                                                                      
  {
   for(j=1;j<l;j++)
   {
    if((s[i][j]>='a'&&s[i][j]<='z')||(s[i][j]>='A'&&s[i][j]<='Z')||s[i][j]=='_'||(s[i][j]>='0'&&s[i][j]<='9'))
     t=0;
    else
    {
     t=1;                                                                                                          
     printf("no\n");
     break;
    }                
   }
   if(t==0)
   printf("yes\n");                                                                             
  }
  else
  {
   printf("no\n");
  }
 } 
  getchar();
  getchar();
  getchar();
  return 0;
}
 
 
 
 
 
