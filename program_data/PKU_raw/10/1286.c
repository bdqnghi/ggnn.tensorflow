
void main()
{
	int k;
	int i;
	int j;
	int t;
	int m[25];
	int s[25][25];
/*
	int * m;
	int * * s;
*/
	scanf("%d",&k);
/*
	m=(int*)malloc(k*sizeof(int));
	s=(int**)malloc(k*sizeof(int*));
	for(i=0;i<k;i++)
	{
		s[i]=(int*)malloc((i+1)*sizeof(int));
	}
*/

	
	for(i=0;i<k;i++)
	{
		scanf("%d",&m[i]);
	}

	for(i=0;i<k;i++)
	{
		if(m[i]>=m[k-1]) s[k-1][i]=1;
		else s[k-1][i]=0;
	}

	for(j=k-2;j>=0;j--)
	{
		for(i=0;i<=j;i++)
		{
			if(m[j]>m[i])
			{
				t=0;
				t+=s[j+1][i];
			}
			else
			{
				t=1;
				t+=s[j+1][j];
			}
			if(t<s[j+1][i]) t=s[j+1][i];
			s[j][i]=t;
		}
	}
	
	t=0;
	for(i=0;i<k;i++)
	{
		if(s[i][i]>t) t=s[i][i];
	}
	printf("%d",t);

}