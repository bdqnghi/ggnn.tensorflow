void main()
{
 int n,a[3],i=0;
 scanf("%d",&n);
 if(n%3==0)
 a[i++]=3;
 if(n%5==0)
 a[i++]=5;
 if(n%7==0)
 a[i++]=7;
 switch(i)
{
 case 3:printf("%d %d %d",a[0],a[1],a[2]);break;
 case 2:printf("%d %d",a[0],a[1]);break;
 case 1:printf("%d",a[0]);break;
 case 0:printf("%c",'n');break;
}
}
