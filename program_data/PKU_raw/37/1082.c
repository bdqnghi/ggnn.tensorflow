int main()
{
  int n,i,a[30],min,j;
  char s[150000];
  scanf("%d\n",&n);
  for (i=1;i<=n;i++)
  {
     scanf("%s",s);
     memset(a,255,sizeof(a));
     a[0]=1000000;
     for (j=0;j<strlen(s);j++)
       if (a[s[j]-96]==-1)
         a[s[j]-96]=j;
         else
           a[s[j]-96]=-2;
     min=0;
     for (j=1;j<=26;j++)
       if ((a[j]>=0)&&(a[j]<a[min]))
         min=j;
     if (min==0)
       printf("no\n");
     else
       printf("%c\n",min+96);
  }
}