void main()
{
	int i,n,j;
	int a[301];
	scanf("%d",&n);
	for (i=1;i<=n;i++)
		scanf("%d",&a[i]);
	printf("%d",a[1]);
	for (i=2;i<=n;i++)
		if (a[i]==a[1])
			a[i]=-1;
	for (i=2;i<=n;i++){
		if (a[i]!=-1){
			printf(",%d",a[i]);
			for (j=i+1;j<=n;j++)
				if (a[j]==a[i])
					a[j]=-1;}
	}
}  
