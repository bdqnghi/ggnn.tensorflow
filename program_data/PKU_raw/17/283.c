int main()
{
	void match(char a[]);
	int signal=1;
	int i;
	char s[101],s1[101]="";
	gets(s);
	while (signal)
	{		
		match(s);
		strcpy(s1,s);
		scanf("%s",s);
		if (strcmp(s,s1)==0)
			signal=0;
	}

	return 0;
}

void match(char a[])
{
	int i,j,k,len;
	int f1=0,f2=0,f3=1;
	len=strlen(a);
	if (len!=0)
	printf("%s\n",a);
	do
	{
	  if (len!=0)
	  {
		f1=0;
		f2=0;
		f3=1;//??????
		for (i=len-1;i>=0;i--)
		{
			if (a[i]=='(')
			{
				f1=1;//????????
				for (j=i+1;a[j];j++)
				{
					if (a[j]==')')
					{
						f2=1;//??????????
						a[j]='0';
						a[i]='0';
						break;
					}
				}
				if (f2==0)//???????,a[i]?????
				{
					a[i]='1';
				}
				
			}
			if (f1==1)
				break;
		}
		if (f1==0)//???????
		{
			for (i=0;a[i];i++)
			{
				if (a[i]==')')//??????????2
				{
					a[i]='2';
				}
			}
		}
		for (i=0;a[i];i++)
		{
			if (a[i]=='('||a[i]==')')
			{
				f3=0;
				break;
			}
		}
	  }
	}while (f3==0);
	for (i=0;a[i];i++)
	{
		if (a[i]=='1')
			printf("$");
		else if (a[i]=='2')
			printf("?");
		else
			printf(" ");
	}
	printf("\n");
}