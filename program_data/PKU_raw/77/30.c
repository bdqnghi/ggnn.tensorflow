
int main()
{
	char s[200],m,f;
	int i,j;
    gets(s);
	m=s[0];
	for(i=0;i<200;i++)
	{
		if(s[i]!=0&&s[i]!=m)
		{
			f=s[i];
			break;
		}
	}
	for(i=0;i<200;i++)
	{
		if(s[i]!=0)
		{
			if(s[i]==f)
			{
				for(j=i-1;j>=0;j--)
				{
					if(s[j]==m)
					{
						printf("%d %d\n",j,i);
						s[i]='p';
						s[j]='q';
						break;
					}
				}
			}
		}
		else
			break;
	}
	return 0;
}