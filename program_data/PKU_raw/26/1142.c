

int main()
{
	int c;
	char getline[MAX];
	int i=0;
	int ex=IN;
	int line=0;
	while ((c=getchar())!='\n')
	{
		if (c!=' ')
		{
			ex=IN;
			getline[i]=c;
			++i;
		}
		else if ((c==' ')&&(ex==IN))
		{
			getline[i]=c;
			++i;
			ex=OUT;
		}
		else if ((c==' ')&&(ex==OUT))
			ex=OUT;
	}
	line=i;
	i=0;

	for (i=0;i<line;++i)
		putchar(getline[i]);

}
