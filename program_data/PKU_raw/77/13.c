
int main()
{
	char boy, girl;
	char p[100];
	scanf("%s", p);
	
	boy = p[0];
	int i, j, k = 0;
	for(i = 1; i < strlen(p); i++)
	{
		if(p[i] != boy)
		{
			girl = p[i];
			break;
		}
	}

	struct
	{
		int id;
		char c;
	}
	a[100], t;
	
	for(i = 0; i < strlen(p); i++)
	{
		a[i].id = i;
		a[i].c = p[i];
	}

	for(i = 0; i < strlen(p) - k; i++)
	{
		if(a[i].c == boy && a[i + 1].c == girl)
		{
			printf("%d %d\n", a[i].id, a[i + 1].id);
			k += 2;
			for(j = i; j < strlen(p) - k; j++)
			{
				a[j] = a[j + 2];
			}
			i = -1;
		}
	}

	return 0;
}
