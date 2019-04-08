main()
{
    int n[20],m[20],z[201];
    int i,j,k,l,t;
    for(i=0;;i++)
    {
        scanf("%d %d",&n[i],&m[i]);
        if(n[i]==0&&m[i]==0)
        {break;}
    }

    for(i=0;n[i]!=0||m[i]!=0;i++)
    {
        int z[201]={0},t;
        for(j=0;j<n[i];j++)
        {
            z[j]=j+1;
        }
        t=n[i];
        k=0;
        for(j=1;j<=t-1;j++,n[i]--)                //????j<=n[i]-1?n[i]???!!
        {
            k=(m[i]+k-1)%n[i];
            for(l=k;z[l]!=0;l++)              //??????    ????'0' !!!!
            {
                z[l]=z[l+1];
            }
        }
        printf("%d\n",z[0]);
    }
}
