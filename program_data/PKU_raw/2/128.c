
int main()
{
    int maxc=0,i,j,n,a[1000],c;
    char maxp,b[1000][27],p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%s",&a[i],b[i]);
    }
    for (p='A';p<='Z';p++)
    {
        c=0;
         for(i=0;i<n;i++)
         {
            for(j=0;;j++)
            {
                if(b[i][j]=='\0') break;
                if(b[i][j]==p)
                {
                    c++;
                }

            }
         }
        if(c>maxc)
        {
            maxc=c;
            maxp=p;
        }
    }
    printf("%c\n",maxp);
    printf("%d\n",maxc);




      for(i=0;i<n;i++)
         {
            for(j=0;;j++)
            {
                if(b[i][j]=='\0') break;
                if(b[i][j]==maxp)
                {
                    printf("%d\n",a[i]);
                }

            }
         }





    
    return 0;
}
