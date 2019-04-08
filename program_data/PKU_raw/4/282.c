int main()
{
	int a,b,n[100][100],c,d,e,f,g,h,i,j,k,l;
	scanf("%d%d",&a,&b);
	for(c=1;c<=a;c++)
	{
		for(d=1;d<=b;d++)
		{
			scanf("%d",&n[c][d]);
		}
	}
	if(a>=b)
	{
		for(e=1;e<=b;e++)
		{
			for(f=1;f<=e;f++)
			{
				printf("%d\n",n[f][e+1-f]);
			}
		}
		for(g=2;g<=a;g++)
		{
			for(h=1;h<=b&&g-1+h<=a;h++)
			{
				printf("%d\n",n[g-1+h][b+1-h]);
			}
		}
	}
	else
	{
		for(i=1;i<=b;i++)
		{
			for(j=1;j<=a&&i+1-j>0;j++)
			{
				printf("%d\n",n[j][i+1-j]);
			}
		}
		for(k=2;k<=a;k++)
		{
			for(l=1;l<=a+1-k;l++)
				printf("%d\n",n[k-1+l][b+1-l]);
		}
	}
	return 0;
}


