void main()
{
	int n,i,j,m=1,k=1,a[20000],b[20000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	b[0]=a[0];
	
	for(i=1;i<n;i++){
		for(j=0;j<i;j++){
		    if(a[i]==a[j])
		    k=0;
		}
		    if(k==1){
		    	b[m]=a[i];
		    	m++;
		    }
		    k=1;
	}
		    	
	for(j=0;j<m-1;j++)
	printf("%d ",b[j]);
	printf("%d",b[j]);
}
