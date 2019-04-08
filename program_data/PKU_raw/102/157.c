double m[40],f[40];
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n;
    char str[20];
    double h;
    int b,g;
    while(scanf("%d",&n)!=EOF)
    {
        b=0;
        g=0;
        for(int i=0;i<n;i++)
        {
            scanf("%s%lf",str,&h);
            if(strcmp(str,"male")==0)
            {
                m[b++]=h;
            }
            else
                f[g++]=h;
        }
        sort(m,m+b);
        sort(f,f+g);
        for(int i=0;i<b;i++)
            printf("%.2lf ",m[i]);
            //cout<<<<" ";
        //cout<<g<<endl;      
        for(int i=(g-1);i>0;i--)
            printf("%.2lf ",f[i]);
        printf("%.2lf\n",f[0]);
        //cout<<f[0]<<endl;
        //cout<<endl;
        
    }
    return 0;
}
