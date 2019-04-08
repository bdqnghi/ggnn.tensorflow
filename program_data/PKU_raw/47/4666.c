int main(int argc, char* argv[])
{
	int i,A[N],B[N],n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
       scanf("%d",&A[i]);
	}
	printf("%d",A[n-1]);
	for(i=1;i<n;i++)
	{
		B[i]=A[n-1-i];
	
	printf(" %d",B[i]);
	}
	return 0;
}

