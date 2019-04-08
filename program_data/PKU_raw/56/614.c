int main(int argc, char*argv[])
{
    int x,y,a,b,c,d,e;
    int p,q,r;
    int h,i,j,k;
    scanf("%d",&x);
    a=x/10000;
    p=x%10000;
    b=p/1000;
    q=p%1000;
    c=q/100;
    r=q%100;
    d=r/10;
    e=r%10;
    y=e*10000+d*1000+c*100+b*10+a;
    h=y%10;
    i=y%100;
    j=y%1000;
    k=y%10000;
    if(h==0)
      if(i==0)
        if(j==0)
          if(k==0)
            printf("%d",e);
          else
            printf("%d%d",e,d);
        else
          printf("%d%d%d",e,d,c);
      else
        printf("%d%d%d%d",e,d,c,b);
    else
      printf("%d%d%d%d%d",e,d,c,b,a);
    return 0;
}
