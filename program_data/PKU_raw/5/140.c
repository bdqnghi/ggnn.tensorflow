int main()
{
	int i, j, m=0;
	double sum = 0, n;
	char gene[3][501];

	scanf("%lf", &n);
	scanf("%s", gene[0]);
	scanf("%s", gene[1]);
	if(strlen(gene[0])!=strlen(gene[1]))
		printf("error");
	else
	{
		for(i = 0; i < 2; i++)
	    {
		    for(j = 0; gene[i][j] != '\0'; j++)
		    {
			    if(gene[i][j]!='A' && gene[i][j]!='T' && gene[i][j]!='C' && gene[i][j]!='G')
				{
					printf("error");
					m = 1;
				    break;
				}
		    }
	    }
		for(i = 0; gene[0][i]!='\0'; i++)
		{
			if(gene[0][i]==gene[1][i])
				sum++;
		}
		if(sum/strlen(gene[0])>n && m == 0)
			printf("yes");
		else if(sum/strlen(gene[0])<=n && m == 0)
			printf("no");
	}
	return 0;
}