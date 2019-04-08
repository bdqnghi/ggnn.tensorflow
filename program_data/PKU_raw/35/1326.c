int main()
{
	int a[8][8], i, j, t, s, I, J, m[8], n[8], flag;   //s?????? t??????
	scanf("%d,%d", &I, &J);
	for(i=0;i<I;i++)
	{
		for(j=0;j<J;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for(i=0;i<I;i++)
	{
		n[i]=0;
		t=a[i][0];
		for(j=1;j<J;j++)
		{
			if(a[i][j]>t)
			{
				t=a[i][j];
				n[i]=j;
			}
		}
	}
	for(j=0;j<J;j++)
	{
		m[j]=0;
        s=a[0][j];
		for(i=1;i<I;i++)
		{
			if(a[i][j]<s)
			{
				s=a[i][j];
				m[j]=i;
			}
		}
	}
	flag=1;
	for(i=0;i<I;i++)
	{
		for(j=0;j<J;j++)
		{
			if(a[i][n[i]]==a[m[j]][j])
			{
				printf("%d+%d\n", m[j],n[i]);
				flag=0;
				break;
			}
		}
	}
	if(flag)
    printf("No\n");
	return 0;
}