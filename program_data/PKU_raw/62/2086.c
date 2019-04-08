int main()
{
	char c[101],i,j=1,k;
	for (j=1;;j++)
	{
		c[j]=getchar();
		if (c[j]=='\n')
			break;
	}
	for (i=1;i<=j;i++)
	{
		if (c[i]==' ')
		{
			for (k=i+1;;k++)
			{
				if (c[k]==' ')
					c[k]=1;
				else
					break;
			}
		}
	}
	for (k=1;k<=j;k++)
	{
		if (c[k]!=1)
			putchar(c[k]);
	}
	return 0;
}