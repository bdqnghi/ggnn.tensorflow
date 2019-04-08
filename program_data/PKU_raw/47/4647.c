
int main()
{
	int n,i;
	int A[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		int a;
		scanf("%d",&a);
		A[i]=a;
	}
	for(i=n-1;i>=0;i--){
		if(i>0)
		printf("%d ",A[i]);
		else
			printf("%d",A[i]);
	}
	return 0;
}
