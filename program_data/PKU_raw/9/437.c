int main()
{
       char s[100][10];
       int n,z[100];
       scanf("%d",&n);
       for(int i=0;i<n;i++)
       {
             scanf("%s%d",s[i],&z[i]);
       }
       for(int j=120;j>=60;j--)
       {
             for(int t=0;t<n;t++)
             {
                    if(z[t]==j)
                    {  
                          printf("%s\n",s[t]);
                          z[t]=0;
                     }
              }
        }
        for(int m=0;m<n;m++)
        {
              if(z[m]!=0)
                  printf("%s\n",s[m]);
        }
        return 0;
}