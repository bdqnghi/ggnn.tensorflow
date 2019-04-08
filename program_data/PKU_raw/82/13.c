int main()
{
int n,m=0,k=0,b=0,i;
int a[100][2];
scanf("%d",&n);
for(i=0;i<100;i++)
a[i][1]=0;
for(i=0;i<n;i++)
{
scanf("%d %d\n",&a[i][1],&a[i][2]);
}
for(i=0;i<n;i++)
{
if(a[i][1]>=90&&a[i][1]<=140&&a[i][2]>=60&&a[i][2]<=90)
{k=k+1;
    if(k>b) b=k;}
else
k=0;
}
printf("%d",b);
return 0;
}