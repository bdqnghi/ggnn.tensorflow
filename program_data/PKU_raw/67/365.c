
int main()
{
	int n,i;
	float xg[1000],a,b,x;
	scanf("%d",&n);
	scanf("%f%f",&a,&b);
	x=(b/a)*100;
         for(i=0;i<n-1;i++)
	{
                  float p,q,y;
		scanf("%f%f",&p,&q);
		y=(q/p)*100;
		xg[i]=y;
	}
	for(i=0;i<n-1;i++)
	{
		if((x-xg[i])>5)
		{
			printf("worse\n");
		}
		else if((xg[i]-x)>5)
		{
			printf("better\n");
		}
		else{
                           printf("same\n");
		}
	}
	return 0;
}