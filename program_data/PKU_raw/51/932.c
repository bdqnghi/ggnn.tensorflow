int main()
{
    char c[510][7],wenben[510];
    int n,m,i,j,k,cishu[510]={0},max,zd,pinshu=0;
    scanf("%d",&m);
    getchar();
    scanf("%s",wenben);
    n=strlen(wenben);
    for(i=0;i<n-m+1;i++)
    {
                        for(j=i;j<i+m;j++)
                        {
                                        c[i][j-i]=wenben[j];
                        }
                        c[i][m]='\0';
    }
    for(i=0;i<n-m+1;i++)
    {
                        for(j=i;j<n-m+1;j++)
                        {
                                            if(strcmp(c[i],c[j])==0) cishu[i]+=1;
                        }
    }
    max=cishu[0];zd=0;
    for(i=0;i<n-m+1;i++)
    {
                        if(cishu[i]>max) 
                        {
                                         max=cishu[i];
                                         zd=i;
                        }
    }
    if(max<=1) printf("NO");
    else
    {
    printf("%d\n",max);
    for(i=0;i<n-m+1;i++)
    {
                        if(cishu[i]==max) printf("%s\n",c[i]);
    }
    }
    return 0;
}