main()
{
    int n,i,j,x=0;
    float r;
    float m[40]={0},f[40]={0};
    struct person
    {
        char gender[7];
        float height;
    }person[40];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%s%f",person[i].gender,&person[i].height);
    for(i=0;i<n;i++)
    {
        if(strlen(person[i].gender)==4) m[i]=person[i].height;
        else f[i]=person[i].height;
    }
    for(i=0;i<40;i++)
    {
        for(j=40-1;j>i;j--)
            if(m[i]>m[j])
            {r=m[i];m[i]=m[j];m[j]=r;}
    }
        for(i=0;i<40;i++)
    {
        for(j=40-1;j>i;j--)
            if(f[i]<f[j])
            {r=f[i];f[i]=f[j];f[j]=r;}
    }
    i=0;
    do{i++;}while(m[i]==0);
    printf("%.2f",m[i]);
    x=i;
    for(i=x+1;i<40;i++) printf(" %.2f",m[i]);
    i=0;
    while(f[i]!=0)
    {
        printf(" %.2f",f[i]);
        i++;
    }
}
