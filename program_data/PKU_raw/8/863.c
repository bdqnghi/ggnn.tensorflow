void mysort(int*pn, int n)
{
	int i,j;
	int temp;
	for (j=0; j<n; j++)
	{
		for (i=j+1; i<n; i++)
		{
			if (pn[j]>pn[i])
			{
				temp =pn[j];
				pn[j]=pn[i];
				pn[i]=temp;
			}
		}
	}
}

void merge(int *pn, int n, int *pm, int m)
{
	int i; 
	printf("%d", pn[0]);
	for (i=1; i<n; i++)
	{
		printf(" %d", pn[i]);
	}
	for (i=0; i<m; i++)
	{
		printf(" %d", pm[i]);
	}
}
int main(int argc, char* argv[])
{
	int m, n, i, *pm, *pn;
	scanf("%d%d",&m, &n);
	pm= (int*)calloc(m, sizeof(int));
	pn= (int*)calloc(n,sizeof(int));

	for (i=0; i<m; i++)
	{
		scanf("%d",&(pm[i]));
	}
	for (i=0; i<n; i++)
	{
		scanf("%d",&(pn[i]));
	}

	mysort(pm, m);
	mysort(pn, n);
	merge(pm, m, pn, n);

	free(pm);
	free(pn);
	return 0;
}