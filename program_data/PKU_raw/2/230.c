main()
{
   int m,n,j,k,id[1001],a[26]={0};
   char c[1001][26],b[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
   scanf("%d",&n);
   for(j=1;j<=n;j++) {scanf("%d %s",&id[j],&c[j]);}
   for(m=0;m<26;m++)
   {
             for(j=1;j<=n;j++)
             {
                           for(k=0;k<26;k++) {if(b[m]==c[j][k]) a[m]=a[m]+1;}
             }
   }
   int t=0,r=0;
   for(m=0;m<=25;m++)
   {
        if(t<a[m]) {t=a[m];r=m;}
   }
   printf("%c\n%d",b[r],a[r]);
   for(j=1;j<=n;j++)
   {
             for(k=0;k<26;k++)
             {
                    if(c[j][k]==b[r]) printf("\n%d",id[j]);
             }
   }
}