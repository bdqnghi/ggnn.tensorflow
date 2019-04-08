
int main(int argc, char* argv[])
{
	int n,i,j;
	char d[300];
	scanf("%d\n",&n);
	for(i=1;i<=n;i++)
	{
		for(j=0;j<=256;j++)
		{
			d[j]=0;
		}
		gets(d);
		j=0;
		while (d[j]!=0)
		{
			switch (d[j])
			{
			case 'A':
					printf("T");
					break;
			case 'T':
					printf("A");
					break;
			case 'C':
					printf("G");
					break;
			case 'G':
					printf("C");
					break;
			}
			j++;
		}
		printf("\n");
	}
	return 0;
}
