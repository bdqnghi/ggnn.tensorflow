int sushu(int b)
{
	int flag=1,i;
	if(b==2)
		return 1;
	if(b%2==0)
		return 0;
	for(i=2;i<=b/2;i++)
	{
		if(b%i==0)
		{
			flag=0;
			break;
		}
	}
	if(flag==0)
		return 0;
	else 
		return 1;
}
int number(int a,int b)
{
	int i,total=1;
	if(sushu(a))
	{
		total=1;
		return total;
	}
	for(i=b;i<=a;i++)
	{
		
		if(a%i==0&&a/i>=i)
		{
			total=total+number(a/i,i);
		}
	}
	return total;
}
void main()
{
	int n,i,A[100],B[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
		B[i]=number(A[i],2);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",B[i]);
	}
}