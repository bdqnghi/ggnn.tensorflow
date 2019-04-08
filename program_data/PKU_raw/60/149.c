void main()
{
	int n, i, m, flag, a[5000]={0}, t, j;

	scanf("%d", &n);

	t = 0;
	for(i=3; i<=n; i++)
	{
		flag =  0;
		for(m=2; m<i; m++)
		{
			if(i%m==0)
			{
				flag = 1;
				break;
			}
		}
		if(flag==0)
		{
			a[t] = i;
			t++;
		}
	}
	
	if(a[1]==0)
		printf("empty");
	else
	{
	for(i=0; i<t-1; i++)
	{
		if(a[i+1]-a[i]==2)
		{
			printf("%d %d\n", a[i], a[i+1]);
		}
	}
	}
}