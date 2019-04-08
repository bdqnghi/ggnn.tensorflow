int main()
{
	int n,i,k;
	char zfc[1000][256];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",&zfc[i]);
	}
	for(i=0;i<n;i++)
	{
		for (k=0; zfc[i][k]!=0; k++) 
		{
            switch (zfc[i][k]) 
			{
            case 'A': 
				zfc[i][k] = 'T'; 
                break;
            case 'G': 
                zfc[i][k] = 'C'; 
                break;
            case 'T': 
                zfc[i][k] = 'A'; 
                break;
            case 'C': 
                zfc[i][k] = 'G'; 
                break;
            }

		}
	}
	for(i=0;i<n;i++)
	{
		printf("%s\n",zfc[i]);
	}
	return 0;
}
