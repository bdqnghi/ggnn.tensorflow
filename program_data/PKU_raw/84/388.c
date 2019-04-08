
int main()
{
	int i,a[100],n;
	int e=0;

	for(i=0;i<100;i++){
			 a[i]=0;
	}

	scanf ("%d",&n);

	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n-1;i++){
		if(a[i]>a[i+1]){
			e=a[i+1];
			a[i+1]=a[i];
			a[i]=e;	
		}
	}	

	for(i=0;i<n-2;i++){
		if(a[i]>a[i+1]){
			e=a[i+1];
			a[i+1]=a[i];	
			a[i]=e;
		}
	}

         printf("%d\n%d",a[n-1],a[n-2]);
	return 0;
}