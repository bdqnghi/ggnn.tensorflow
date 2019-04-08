int main()
{
	int n,a[5];
	scanf("%d",&n);
	a[1]=n/10000;
	a[2]=(n-a[1]*10000)/1000;
	a[3]=(n-a[1]*10000-a[2]*1000)/100;
	a[4]=(n-a[1]*10000-a[2]*1000-a[3]*100)/10;
	a[5]=n-a[1]*10000-a[2]*1000-a[3]*100-a[4]*10;
	if (a[1]!=0)
		printf("%d%d%d%d%d",a[5],a[4],a[3],a[2],a[1]);
	else
	{
		if(a[2]!=0)
		printf("%d%d%d%d",a[5],a[4],a[3],a[2]);
		else
		{
			if(a[3]!=0)
				printf("%d%d%d",a[5],a[4],a[3]);
			else
			{
				if(a[4]!=0)
				    printf("%d%d",a[5],a[4]);
				else
				{
					if(a[5]!=0)
						printf("%d",a[5]);
					else
						printf("0");
				}
			}
		}
	}
	return 0;
}
