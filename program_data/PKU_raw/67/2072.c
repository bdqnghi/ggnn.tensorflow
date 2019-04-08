int main()
{
	int n,i;
	int a[100],b[100];
	double c[100];
	scanf("%d",&n);
	scanf("%d %d",&a[0],&b[0]);
	for(i=1;i<n;i++){
		scanf("%d %d",&a[i],&b[i]);
	}
	for(i=0;i<n;i++){
		c[i]=(double)b[i]/a[i];
	}
	if(c[1]-c[0]>0.05){
		printf("better");
	}
	else if(c[0]-c[1]>0.05){
		printf("worse");
	}
	else{
		printf("same");
	}
	for(i=2;i<n;i++){
		printf("\n");
		if(c[i]-c[0]>0.05){
			printf("better");
		}
		else if(c[0]-c[i]>0.05){
			printf("worse");
		}
		else{
			printf("same");
		}
	}
	return 0;
}