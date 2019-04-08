int main()
{

    int a[300];
	float b[300];
	int i,n;
	float sum=0;
	scanf("%d",&n);
	for(i=0;i<=n-2;i++)
	{
		scanf("%d ",&a[i]);
	}
	scanf("%d",&a[n-1]);
	for(i=0;i<=n-1;i++){
		sum=sum+a[i];
	}
    float m;
	m=sum/n;
	for(i=0;i<=n;i++){
		b[i]=a[i]-m;
		if(b[i]<0){
			b[i]=m-a[i];
		}
	}
	float max=0;
	for(i=0;i<=n-1;i++){
		if(b[i]>max){
			max=b[i];
		}
	}
	int h=0;
    int c[300];
	for(i=0;i<=n-1;i++){
		if(b[i]==max){
			c[h]=a[i];
			h++;
		}
	}
	int j;
	int t;
	for(i=0;i<=h-2;i++){
		for(j=0;j<=h-2;j++){
			if(c[j]>=c[j+1]){
				t=c[j+1];
				c[j+1]=c[j];
				c[j]=t;
			}
		}
	}
	for(i=0;i<=h-2;i++){
		printf("%d,",c[i]);
	}
	printf("%d\n",c[h-1]);
	return 0;
}