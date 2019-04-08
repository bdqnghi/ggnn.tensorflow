int main()
{
    int c;
    int x=1,y=2,z,m;
    double r,s=0;
    scanf("%d",&m);
    int sz[m];
    for(int k=0;k<m;k++)
    {
            scanf("%d",&sz[k]);
    }
    for(int j=0;j<m;j++)
    {
            for(int i=1;i<=sz[j];i++)
            {
                    r=1.0*y/x;
                    z=x+y;
                    x=y;
                    y=z;
                    s+=r;
            }
            printf("%.3lf\n",s);
            s=0;
            x=1;
            y=2;
    }
    while((c=getchar())!='\n'&&c!=EOF);
    clearerr(stdin);
    getchar();
    return 0; 
}
