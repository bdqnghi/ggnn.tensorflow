int main()
{
 int b[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
 int m,i,j,k,num[10000],max=0,t=0;
 char a[10000][26];
 char c[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
 scanf("%d",&m);
 for(i=0;i<m;i++)
 {
  scanf("%d",&num[i]);
  scanf("%s",&a[i]);                
 }
 for(i=0;i<m;i++)
 {
  for(j=0;j<26;j++)
  {
   for(k=0;k<26;k++)
   {
    if(a[i][j]==c[k])
    b[k]++;
   }                 
  }                
 }
 for(i=0;i<26;i++)
 {
  if(b[i]>max)
  {
   max=b[i];                 
   t=i;
  }
 }
 printf("%c\n",c[t]);
 printf("%d\n",max);
 for(i=0;i<m;i++)
 {
  for(j=0;j<26;j++)
  {
    if(a[i][j]==c[t])
    {
     printf("%d\n",num[i]);
     break;                 
    }                 
  }                
 }
 
 getchar();
 getchar();
 return 0;   
}