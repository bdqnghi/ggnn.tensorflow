void main()
{
int n,k,a,i;
i=1;
scanf("%d %d",&n,&k);
if(n==2)a=8-k;
else{
	a=n;
	do
	{
	a=a*n;
	i=i+1;
	}while(i!=n);
	a=a-(n-1)*k;
}
printf("%d",a);
}