int days(int x,int y,int z)
{
    int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int i,d=0;
    for(i=1;i<=(x-1);i++) 
    {
           if((i%4==0&&i%100!=0)||(i%400==0)) d=d+366;
           else d=d+365;
    }
    if(y==1) d=d+z;
    else if(y==2) d=d+31+z;
    else if(y>2)
    {
           for(i=1;i<=y-1;i++) {d=d+a[i];}
           if((x%4==0&&x%100!=0)||(x%400==0)) d=d+1+z;
           else d=d+z;
    }
    return(d);
}

main()
{
    int sy,sm,sd,ey,em,ed;
    int days(int x,int y,int z);
    int a,b;
    scanf("%d %d %d %d %d %d",&sy,&sm,&sd,&ey,&em,&ed);
    a=days(sy,sm,sd);
    b=days(ey,em,ed);
    printf("%d",b-a);
}
