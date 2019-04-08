int f(int x)
{
    int a[5];
    int b[5]={10000,1000,100,10,1};
    int i,j;
    int sum=0;
    if(x==0)
    return 0;
    else if(x==-0)
    return 0;
    else if(x>0)
    {    
        int m=x;
        for(i=0;i<5;i++)
        {a[i]=m/b[i];m=x%b[i];}
        for(i=0;i<5;i++)
        {if(a[i]!=0) break;}
        for(j=i;j<5;j++)
        {sum=sum+a[j]*b[4+i-j];}
        return sum;
    }
    else
    {
        int y=-x;
        for(i=0;i<5;i++)
        {a[i]=y/b[i];y=y%b[i];}
        for(i=0;i<5;i++)
        {if(a[i]!=0) break;}
        for(j=i;j<5;j++)
        {sum=sum+a[j]*b[4+i-j];}
        sum=-sum;
        return sum;
    }
}
main()
{
      int a,b,c,d,e,g;
      scanf("%d\n%d\n%d\n%d\n%d\n%d",&a,&b,&c,&d,&e,&g);
      a=f(a);
      b=f(b);
      c=f(c);
      d=f(d);
      e=f(e);
      g=f(g);
      printf("%d\n%d\n%d\n%d\n%d\n%d",a,b,c,d,e,g);
      getchar();
      getchar();
}
