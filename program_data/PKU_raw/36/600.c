
void main()
{
	int i;
	char a[100],b[100];
	int x[2][52]={0};

	scanf("%s%s",a,b);

	for(i=0;i<(signed)strlen(a);i++)
	{
		if(a[i]>90)
			x[0][a[i]-97]++;
		else
			x[0][a[i]-39]++;
	}
	for(i=0;i<(signed)strlen(b);i++)
	{
		if(b[i]>90)
			x[1][b[i]-97]++;
		else
			x[1][b[i]-39]++;
	}

	int u=0;
	for(i=0;i<52;i++)
	{
		if(x[0][i]!=x[1][i])
		{
			u=1;
			break;
		}
	}
	if(u==0)
		printf("YES\n");
	else
		printf("NO\n");
}

