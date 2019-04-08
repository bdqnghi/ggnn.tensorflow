int num=1;
int sushu(int n)
{
	int i,sum=0;
	for(i=1;i<=sqrt(n*1.0);i++)
		if(n%i==0)
			sum++;
	if(sum==1)
		return 1;
	else 
		return 0;
}
void fenjie(int i,int k)//i???????k??????????? i?sqrt?n???
{
	int mid,j;
	mid=sqrt(k*1.0);
	for(j=i;j<=mid;j++)
	{
		if(sushu(k))
			break;
		else
		{
			if(k%j==0)
			{
				num++;
				fenjie(j,k/j);
			}
		}
	}
}
int main()
{
	int n,i;
	int a[100];
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
	{
		fenjie(2,a[i]);
		cout<<num<<endl;
		num=1;
	}
	return 0;
}
