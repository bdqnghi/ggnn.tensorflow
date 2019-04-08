int main()
{
    int n,i,j,t,y;
    int a[20];
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
      y=0;
     scanf("%d",&t);
     if(t==0) y=60;
     for(j=0;j<t;j++)
     scanf("%d",&a[j]);
     for(j=0;j<t;j++)
     {if(3*j+a[j]>60) {y=60-3*j;break;}
     else if(3*j+a[j]>=57) {y=a[j];break;}}
      if(a[t-1]+3*t<60) y=60-3*t;
     printf("%d\n",y);
     }
     return 0;
}