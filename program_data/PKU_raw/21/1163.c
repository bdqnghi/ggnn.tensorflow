void bb(int n,int b[300]){
	 int i=0,j=0,k;
	 for(i=0;i<n-1;i++)
		 for(j=0;j<n-i-1;j++){
			 if(b[j]>b[j+1]){
				 k=b[j];
				 b[j]=b[j+1];
				 b[j+1]=k;
			 }
		 }
}        
int main()
{
	int n,i,a[200],s=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		s+=a[i];
	}
	bb(n,a);
	if((a[0]+a[n-1])*n==2*s)
	printf("%d,%d",a[0],a[n-1]);
	else if((s-n*a[0])>(n*a[n-1]-s))
	printf("%d",a[0]);
	else
    printf("%d",a[n-1]);
	
}









	


