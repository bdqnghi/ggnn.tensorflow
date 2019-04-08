int main()
{
	char s[257],a[257],b[257];
	scanf("%s %s %s",s,a,b);
	int i = 0,j = 0;
	int find = 0;
	for(i = 0;s[i] != '\0';i ++)
	{
		if(s[i] == a[0])
		{

			for(j = 0;a[j] != '\0';j ++)
			{
				//printf("%d",i + j);
				if(a[j] != s[i + j])
				{
					find = 0;
					break;
				}
			}
			if(a[j] == '\0')
				find = 1;
		}
		if(find ==1)
			break;
	}
	if(find)
	{for(j = 0;b[j] != '\0';j ++)
		s[i + j] = b[j];
	}
	printf("%s",s);
	return 0;
}