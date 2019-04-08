void reverse(int x)
{
    int i,b[100],p,r,y;
    scanf("%d",&x);
    i=0;
    if(x==0||x==(-0))
    printf("0");
    if(x<0)
    p=0;
    else
    p=1;
    y=abs(x);
    while(y%10==0)
    {
      y=y/10;
    }   
    b[i]=y%10;
    while(y/10!=0)
    {
     y=y/10;            
     b[i+1]=y%10;
     i++;
    }
    if(p==0)
    printf("-");
    for(r=0;r<=i;r++)
    {
     printf("%d",b[r]);
    }
    printf("\n");
}
int main()
{
    int a[6],i;
    for(i=0;i<6;i++)
    {
     scanf("%d",&a[i]);
    }
    for(i=0;i<6;i++)
    {
     reverse(a[i]);
    }
    getchar();
    getchar();
}
