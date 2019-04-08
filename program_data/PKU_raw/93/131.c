void main()
{
int n;
scanf("%d",&n);
int a[3]={3,5,7},b[3]={0};
int i,t=100;
for(i=0;i<3;i++)
{
if(n%a[i]==0)
b[i]=a[i];
}
for(i=0;i<3;i++)
{
if(b[i]!=0)
{
t=i;
break;
}
}
if(t!=100)
printf("%d",b[t]);
for(i=t+1;i<3;i++)
{
if(b[i]!=0)
printf(" %d",b[i]);
}
if(n%3!=0&&n%5!=0&&n%7!=0)
printf("n");
}