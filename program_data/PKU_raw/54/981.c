
int apple(int n,int k);

int main(int argc, char* argv[])
{
	int m,n,k;

	scanf("%d%d",&n,&k);
	m=apple(n,k);
	printf("%d\n",m);
	
	return 0;
}

int apple(int n,int k)
{
	int num[50];
	int i,j,a;
	for(i=1;;i++)
	{
		num[1]=i*n+k;
		for(j=1;j<n;j++)
		{
			if(num[j]%(n-1)!=0)
			{
				a=0;
				break;
			}
			num[j+1]=num[j]/(n-1)*n+k;
			a=1;
		}
		if(a==1)
			break;
	}
	
	return num[n];
}