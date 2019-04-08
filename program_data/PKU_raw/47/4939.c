
int main()
{
	int a[100];
	int n,t;
	scanf("%d",&n);
	int i;
	for(i=0;i<=n-1;i++){
		scanf("%d",&a[i]);
	}
	if(n%2==0){
		for(i=0;i<=n/2-1;i++){
			t=a[i];
			a[i]=a[n-1-i];
			a[n-1-i]=t;
		}
		for(i=0;i<=n-1;i++)
			if(i<n-1)
			printf("%d ",a[i]);
                           if(i=n-1)
			printf("%d",a[i]);
	}
	if(n%2==1){
		for(i=0;i<=(n-1)/2-1;i++){
			t=a[i];
			a[i]=a[n-1-i];
			a[n-i-1]=t;
		}
		for(i=0;i<=n-1;i++)
                           if(i<n-1)
			printf("%d ",a[i]);
                           if(i=n-1)
			printf("%d",a[i]);
	}
	return  0;
}
