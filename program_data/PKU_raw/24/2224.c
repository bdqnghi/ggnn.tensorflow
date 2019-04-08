
void sub(char c[])
{
	int i,l;
	l=strlen(c);
	for (i=0;i<l;i++)
	{
		if (c[i]==',')
			c[i]=' ';
	}
}

void main()
{
	int i,j=0,k=0,l,max=0,rmax=0,min=0,rmin=0;
	char c[2000]={'\0'},word[200][100]={'\0'};
	gets(c);
	sub (c);
	l=strlen(c);
	for (i=0;i<l;i++)
	{
		if (c[i]==' ')
		{
			j++;
			word[j][k]='\0';
			k=0;
		}
		else
		{
			word[j][k]=c[i];
			k++;
		}
	}
	min=strlen(word[0]);
	max=strlen(word[0]);
	for (;j>=0;j--)
	{
		l=strlen(word[j]);
		if (l>=max)
		{
			max=l;
			rmax=j;
		}
		if (l<=min && l>0)
		{
			min=l;
			rmin=j;
		}
	}
	printf ("%s\n",word[rmax]);
	printf ("%s\n",word[rmin]);
}