
int main()
{
	int i, j, k, l, m, n,o;
	scanf("%d", &k);
	o =0;
	for(i=3;i<(k-1);i++)
	{
		l = 0;
		for(j=2;j<i;j++)
		{
			if(i%j == 0)
				l = l+1;
		}
		if (l == 0){

			m = i+2;
			n = 0;
			for(j=2;j<i;j++)
			{
				if(m%j == 0)
					n = n + 1;

			}
			if(n == 0)
				{printf("%d %d\n",i,m);
			o = o +1;}
		}
		
	}
	if (o == 0)
	{
		printf("empty");
	}
	
	
	
	return 0;
}