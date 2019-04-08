int main()
{
	int n,i,e,t[50],m[50][50],max[50],num[50];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&t[i]);
		for(e=0;e<t[i];e++)
		{
			scanf("%d",&m[i][e]);
		}
	}
	for(i=0;i<n;i++)
	{
		num[i]=60-3*t[i];
		for(e=0;e<t[i];e++)
		{
			if((m[i][e]+3*e)>=57&&(m[i][e]+3*e)<=60)
			{
				num[i]=m[i][e];
				break;
			}
			if((m[i][e]+3*e)>60)
			{
				t[i]=e;
				num[i]=60-3*t[i];
				break;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",num[i]);
	}
	return 0;
}