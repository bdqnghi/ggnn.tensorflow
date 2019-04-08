int main()
{
	int n;
	scanf("%d",&n);
	int i;
	float x,y;
	int a[100],b[100];
	for(i=0;i<n;i++){
		scanf("%d%d",&a[i],&b[i]);}
	x=(float)b[0]/(float)a[0];
	for(i=1;i<n;i++){
		y=(float)b[i]/(float)a[i];
		if(y-x>0.05){
			printf("better\n");
			y=0;}
		else if(x-y>0.05){
			printf("worse\n");
			y=0;}
		else{
			printf("same\n");}}
	return 0;
}

