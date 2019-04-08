
int main()
{
	int n;
	int i;
	int l;
	int left = 80;
	char word[10000][42];
	scanf("%d", &n);
	for(i = 0; i<n;i++)
	{
		scanf("%s", word[i]);
	}
	for(i = 0; i<n;i++)
	{
		l = strlen(word[i]);
		if(left == 80)
		{
			printf("%s", word[i]);
			left -= l;
		}
		else if(left >= l+1)
		{
			printf(" %s", word[i]);
			left -= l+1;
		}
		else
		{
			printf("\n%s", word[i]);
			left = 80 - l;
		}
	}
	return 0;
}