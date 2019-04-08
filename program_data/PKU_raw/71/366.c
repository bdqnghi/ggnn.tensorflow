int f(int y,int m);
main()
{
    int n;
    scanf("%d",&n);
    printf("\n");
    int i,y[200],m1[200],m2[200];
    for (i=0;i<n;i++)
    {    
       scanf("%d %d %d",&y[i],&m1[i],&m2[i]);
       if (f(y[i],m1[i])%7==f(y[i],m2[i])%7)
          printf("YES\n");
       else
          printf("NO\n");
    }
}
int f(int y,int m)
{
    int days[]={0,31,28,31,30,31,30,31,31,30,31,30,31};

    int i;


    if ((y%4==0)&&(y%100!=0)||(y%400==0))
        days[2]++;

    int f=1;
    for(i=1;i<m;i++)
       {
        f +=days[i];
        }

    return f;
}