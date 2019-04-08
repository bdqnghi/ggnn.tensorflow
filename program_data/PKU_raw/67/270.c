int main()
{
	int n,a1,a2,b1,b2;
	scanf("%d%d%d",&n,&a1,&a2);
	float x,y;
	x=(float)a2/a1;
	for(int i=0;i<n-1;i++){
		scanf("%d%d",&b1,&b2);
		y=(float)b2/b1;
		if((y-x)>0.05){
			printf("better\n");
		}
		else if((x-y)>0.05){
			printf("worse\n");
		}
		else{
			printf("same\n");
		}
	}
	return 0;
}

	