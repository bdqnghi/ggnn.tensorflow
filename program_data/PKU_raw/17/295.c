void pipei(char x[],int l)
{
	int i,j,count;
	for(;count!=0;)
	{
		count=0;
		for(i=0;i<l;i++)
		{
			if(x[i]!='(')
				continue;
			for(j=i+1;j<l;j++)
			{
				if(x[j]!='('&&x[j]!=')')
					continue;
				if(x[j]=='(')
					break;
				if(x[j]==')')
				{
					count++;
					x[i]=32;x[j]=32;
					break;
				}
			}
		}
	}
	for(i=0;i<l;i++)
	{
		if(x[i]!='('&&x[i]!=')')
			printf(" ");
		else if(x[i]=='(')
			printf("$");
		else
			printf("?");
	}
	printf("\n");
}
int main()
{
	char x[101];
	int l,i;
	for(;;)
	{
		gets(x);
		if(x[0]=='\0')
			break;
		l=strlen(x);
		puts(x);
		pipei(x,l);
		for(i=0;i<l;i++)
			x[i]='\0';
	}
}