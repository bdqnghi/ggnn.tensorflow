int main()
{
	int k,i;
	float x,y,x1,y1;
	scanf("%d",&k);
	scanf("%d%d",&x1,&y1);
	for(i=0;i<k-1;i++)
	{
		scanf("%d%d",&x,&y);
		if(y/x-y1/x1>0.05)
		printf("better\n");
		if(y/x-y1/x1<-0.05)
		printf("worse\n");
		if((y/x-y1/x1<=0.05)&&(y/x-y1/x1>=-0.05))
		printf("same\n");
	}
    return 0;
}