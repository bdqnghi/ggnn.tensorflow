

char word[1000][41];
int n;


int main()
{
	cin >>n;
	for(int i = 0;i < n; i ++)
		cin >> word[i];
	int count = 0;
	int p = 0;

	while(p < n)
	{
		int len = strlen(word[p]);
		if(count == 0)
		{
			printf("%s", word[p]);
			p ++;
			count += len;
		}
		else if(len + 1 + count <= 80)
		{
			printf(" %s", word[p]);
			p ++;
			count += len + 1;
		}
		else if(len + 1 + count > 80)
		{
			printf("\n");
			count = 0;
		}
		else
			printf("ERROR!-----------------------------------");
	}
	return 0;
}