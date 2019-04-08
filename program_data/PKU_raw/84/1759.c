int main()
{
	int a[100];
	int n,i,j,m,max;
	scanf("%d",&n);
	for (i=0;i<n;i++){
		scanf("%d",&a[i]);
	};
    for (j=0;j<2;j++){
		max=a[j];
		for (i=j+1;i<n;i++){
			if (a[i]>a[j]){
				m=a[i];
				a[i]=a[j];
				a[j]=m;
			}
		}
	}
		printf("%d\n",a[0]);
		printf("%d\n",a[1]);
	return 0;
}
