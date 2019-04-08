int main(int argc, char* argv[])
{
	int a[100],b[100],i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	for(i=0;i<n;i++){
		a[i]=b[n-i-1];
	}
	printf("%d",a[0]);
	for(i=1;i<n;i++){
	printf(" %d",a[i]);
	}
	return 0;
}

