
void main()
{
	int n,a[20000],i,j,k;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		k=0;
		for(j=0;j<i;j++){
			if(a[j]==a[i])
				k=1;	
		}
		if(k==0&&i==0)
			printf("%d",a[i]);
		else if(k==0)
			printf(" %d",a[i]);
	} 
}