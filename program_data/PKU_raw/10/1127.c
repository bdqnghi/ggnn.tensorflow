int a[100];

int f(int a[],int n,int min)
{
	if(n==1)
	{
		if(a[0]>=min)  return (1);
		else return(0);
	}
	else
	{
		if(a[n-1]<min) return(f(a,n-1,min));
		else if(f(a,n-1,a[n-1])+1<f(a,n-1,min))
			return(f(a,n-1,min));
		else return(f(a,n-1,a[n-1])+1);
	}
}



int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	int result;
	result=f(a,n,0);
	printf("%d",result);
	return 0;}
