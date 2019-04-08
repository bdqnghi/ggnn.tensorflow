
int main()
{
	int n,d,x;
	scanf("%d",&n);
	int arr[100]={0};
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	d=0;
	x=0;
	for(int k=0;k<n;k++){
		if(arr[k]>d){
			d=arr[k];
		}
	}
	for(int j=0;j<n;j++){
			if(x<=arr[j]&&arr[j]<d){
				x=arr[j];
			}
	}
	printf("%d\n%d\n",d,x);
	return 0;
}
