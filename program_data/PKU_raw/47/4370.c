void main()
{int a[100],b[100];
int n,*p,*t;
scanf("%d",&n);
for(p=a;p<=a+n-1;p++)
scanf("%d",p);
for(p=a,t=b+n-1;p<=a+n-1;p++,t--)
*t=*p;
for(t=b;t<b+n-1;t++)
printf("%d ",*t);
printf("%d",*t);

}