int main()
{
 int l,i,j,k,p;
 char s[10000];
 int a[10000];
 char c,d;
 scanf("%s",s);
 l=strlen(s);
 p=l;
 c=s[0];
 d=s[l-1];
 for(i=0;i<l;i++)
  a[i]=i;
 for(i=0;i<l/2;i++)
 {
  for(j=0;j<p-1;j++)  
  {
   if(s[j]==c&&s[j+1]==d)
   {
    printf("%d %d\n",a[j],a[j+1]);
    for(k=j+2;k<p;k++)
    {
     s[k-2]=s[k];
     a[k-2]=a[k];                  
    }
    break;                 
   }
  }
  p=p-2;    
 }
 getchar();
 getchar();
 return 0;

}
