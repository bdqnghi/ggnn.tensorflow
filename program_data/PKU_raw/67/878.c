int main()
{
	int n,a,b,i,sz[100],zs[100];
	float x,y[100];
	scanf("%d",&n);
	scanf("%d%d",&a,&b);
	x=(float)b/a*100;
	for(i=0;i<n-1;i++)
	{
		scanf("%d%d",&sz[i],&zs[i]);
		y[i]=(float)zs[i]/sz[i]*100;	
	}
	for(i=0;i<n-1;i++)
	{
	    if(y[i]-x>5)
		{
			printf("better\n");
		}
		else if(x-y[i]>5)
		{
			printf("worse\n");
		}
		else
		{
			printf("same\n");
		}
	}
	return 0;
}