int main()
{
	int n, i;
	scanf("%d", &n);
	float z[n-1];
	float yx[n-1];
	float x, y;
	for(i=0;i<n;i++){
		scanf("%f", &z[i]);
		scanf("%f", &yx[i]);
	}
	x=yx[0]/z[0];
	for(i=1;i<n;i++){
		y=yx[i]/z[i];
		if(y-x>0.05)
			printf("better\n");
		else if(x-y>0.05)
			printf("worse\n");
		else if(x-y<=0.05&&y-x<=0.05)
			printf("same\n");
	}
	return 0;
}