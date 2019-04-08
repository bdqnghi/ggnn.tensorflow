int main()
{
	int n,i,y,j;
	double a[100];
	scanf("%d",&n);
    for(i=0;i<n;i++){
		scanf("%d %d",&y,&j);
		a[i]=1.0*j/y;
	}
	for(i=1;i<n;i++){
		if(a[i]>=a[0]){
			if(a[i]-a[0]>0.05){
				printf("better\n");
			}else{
				printf("same\n");
			}
		}
		if(a[i]<a[0]){
			if(a[0]-a[i]>0.05){
				printf("worse\n");
			}else{
				printf("same\n");
			}
		}
	}
	return 0;
}
