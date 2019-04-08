int main()
{
	int n,i,j;
	int a[20];
	int b[1000];
	int c[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++){
		c[i]=0;
	}
	for(i=0;i<n;i++){
		if(b[i]==1||b[i]==2){
			c[i]=1;
		}else if(b[i]>2){
	          for(j=3;j<=b[i];j++){
	        	a[1]=1;
				a[2]=1;
				a[j]=a[j-1]+a[j-2];
				c[i]=a[j];
			  }
		}
	}
	for(i=0;i<n;i++){
		printf("%d\n",c[i]);
	}
	return 0; 
}
