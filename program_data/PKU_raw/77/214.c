int main()
{
 int l,i,j,k,p;
 char s[10000];
 int a[10000];
 char c,d;
 //int q[10000];
 gets(s);
 l=strlen(s);
 p=l;
 c = s[0];
 d = s[l - 1];
 for(i=0;i<l;i++)
  a[i]=i;
 for(i=0;i<l/2;i++)
 {
  for(j=1;j<p;j++)  
  {
   if(s[j-1]==c&&s[j]==d)
   {
    printf("%d %d\n",a[j-1],a[j]);
    for(k=j+1;k<p;k++)
    {
     s[k-2]=s[k];
     a[k-2]=a[k];                  
    }
    break;                 
   }
  }
  p=p-2;    
 }
 return 0;
}

