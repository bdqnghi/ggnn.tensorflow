int main()
{
    char a[256],b[256],c[256];
    scanf("%s",a);
    scanf("%s",b);
    scanf("%s",c);
    int i,j;
    int count1=0,count2=0;//count1 count2?????????????????
    for(i=0;a[i]!='\0';i++)
    {
        count1++;
    }
    for(j=0;b[j]!='\0';j++)
    {
        count2++;
    }
    int k,l,m,n,judge=0,o,p,judge1=0;
    for(k=0;k<=count1-count2;k++)
    {
        n=0;
        if(a[k]==b[0])
        {
            o=m=k; //??????k?“??”??
            for(n=0;n<=count2-1;n++)
            {
                if(a[m]!=b[n])
                {
                    break;
                }
                else if(n==count2-1&&a[m]==b[n])
                {
                    judge=1;
                }
                else if(a[m]==b[n]&&n!=count2-1)
                {
                    m++;
                }
            }
            if(judge==1)
            {
                for(o=k;o<=k+count2-1;o++)
                {
                    a[o]=c[o-k];
                }
                for(p=0;p<=count1-1;p++)
                {
                     printf("%c",a[p]);
                }
                judge1=1;
                break;
            }                        //?????????????????????????
            else if(judge==0)
            {
                continue;
            }
        }
    }
    if(judge1==0)
    {
                 for(int z=0;z<=count1-1;z++)
                 printf("%c",a[z]);

    }
    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
    getchar();
    //????????“??”?????

}
