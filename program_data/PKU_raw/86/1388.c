int main()
{
	int n,i,j,m,g,t,a[20],k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		if(m==0)
			printf("60\n");
		else
		{
			g=0;
			t=0;
			for(j=0;j<m;j++)
			{
				scanf("%d",&a[j]);
			}
			for(j=0;j<m;j++)
			{
				if(j==0)
				{
					for(k=0;k<a[j];k++)
					{
						t++;
						if(t<60)
							g++;
					}
				}
				else
				{
					for(k=0;k<(a[j]-a[j-1]);k++)
					{
						t++;
						if(t<=60)
							g++;
					}
				}
				t+=3;
				if(t>=60)
						break;
			}
			while(t<60)
			{
				g++;
				t++;
			}
			printf("%d\n",g);
		}
	}
			

	return 0;
}
