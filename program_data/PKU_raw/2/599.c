void main ()
{
     int n,a[1000],i,l,j,max,s[26]={0};
     char c[1000][27],w;
     scanf ("%d",&n);
     for (i=0;i<n;i++)
     {
     scanf ("%d%s",&a[i],c[i]);
     l=strlen(c[i]);
     for (j=0;j<l;j++)
     {
         s[c[i][j]-65]++;
     }
     }
     max=s[0];
     w='A';
     for (i=1;i<26;i++)
     {
     if (s[i]>max)
     {
                  max=s[i];
                  w=i+65;
     }
     }
     printf ("%c\n%d\n",w,max);
     for (i=0;i<n;i++)
     {
         for (j=0;c[i][j]!='\0';j++)
         {
             if (c[i][j]==w)
             {
                            printf ("%d\n",a[i]);
                            break;
             }
         }
     }

}
