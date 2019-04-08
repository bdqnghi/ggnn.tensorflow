int main()
{
	int i,k,n;
	float xin[20],shuzu[20][2];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(k=0;k<2;k++)
		{scanf("%f",&shuzu[i][k]);
		}
	}
	for(i=0;i<n;i++)
		for(k=0;k<2;k++)
		{
			if(k=1)
				xin[i]=shuzu[i][k]/shuzu[i][k-1];
		}
		for(i=1;i<n-1;i++)
		{
				if(xin[i]-xin[0]>0.05)
					printf("better\n");
				else if(xin[0]-xin[i]>0.05)
					printf("worse\n");
				else 
					printf("same\n");
		}
		if(xin[n-1]-xin[0]>0.05)
			printf("berrer");
		else if(xin[0]-xin[n-1]>0.05)
			printf("worse");
		else printf("same");

return 0;
}
