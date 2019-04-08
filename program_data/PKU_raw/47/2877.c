int main()
{
int n,a[101],i,*pt1,*pt2,c;
scanf("%d\n",&n);
for(i=0;i<n;i++)
{
	if(i==0)
		scanf("%d",&a[i]);
	else
		scanf(" %d",&a[i]);
}
for(i=0;i<(n/2);i++){
pt1=&a[n-1-i];
pt2=&a[i];
c=*pt1;
a[n-1-i]=*pt2;
a[i]=c;
}
for(i=0;i<n;i++)
{
	if(i==0)
printf("%d",a[i]);
	else
printf(" %d",a[i]);
}
return 0;
}
