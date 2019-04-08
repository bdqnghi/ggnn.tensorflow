int main()
{
    char a[10000];
	int i,j,l;
	gets(a);
	for(i=0;i<strlen(a);)
	{
		if(a[i]!=' ')
		{
			l=0;
			for(j=0;j<strlen(a);j++)
			{
				if(a[i+j]!=' ')
				{
					l++;
				}
				if((a[i+j]==' ')&&((i+j)!=(strlen(a)-1)))
				{
				    printf("%d,",l);
					break;
				}
				if((i+j)==(strlen(a)-1))
				{
					printf("%d",l);
					break;
				}
			}
			i=i+l;
		}
		else
			i++;
	}
	return 0;
}
