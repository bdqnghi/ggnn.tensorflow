/*??????*/
void main()
{
int a[100];
int n,i,b;
scanf("%d\n",&n);
i=1;
while(i<=n){
scanf("%d",&a[i]);
i++;
}
i=1;
while(i<=n/2)
{
	b=a[i],a[i]=a[n-i+1],a[n-i+1]=b;
	i++;
}
i=1;
while(i<n)
{
	printf("%d ",a[i]);
	i++;
}
printf("%d",a[n]);
}