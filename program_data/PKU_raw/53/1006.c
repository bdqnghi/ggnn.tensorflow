int compare(int s, int a[100], int n)
{
	int i, temp=0;
	for(i=0; i<n; i++)
	{
		if(s==a[i])
		{
			return 1;
			temp=1;
			break;
		}
		else
			continue;
	}
	if(temp=0)
		return 0;
}

int main()
{
	int n, a[100], i, j, w=0;
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
		if(compare(a[i], a, i)==1)
			a[i]=-1;
		else
			continue;
	}
	for(i=0; i<n; i++)
	{
		if(a[i]==-1)
			continue;
		else
		{
			if(w==0)			
				printf("%d", a[i]);
			else
				printf(",%d", a[i]);
			w++;
		}
	}
	printf("\n");
	return 0;
}