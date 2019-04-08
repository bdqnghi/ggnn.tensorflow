void main()
{
	int a[100000],i,j,k,n,t=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	scanf("%d",&k);
	
	for(i=0;i<n-t-1;i++){
		if(a[i]==k){
			for(j=i;j<n-t-1;j++)
			a[j]=a[j+1];
			t++;
			i--;
		}
	}
		if(a[i]==k){
		a[i]='\0';
		t++;
		}
		
	
	for(i=0;i<n-t-1;i++)
	printf("%d ",a[i]);
	printf("%d",a[i]);
}