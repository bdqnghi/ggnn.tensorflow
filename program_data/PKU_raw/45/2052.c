int main()
{
	char s[100],t[100];
	int i,j=0,a,b=0,c;
	scanf("%s",s);
	scanf("%s",t);
	for(i=0;s[i]!='\0';i++)
	{
		a=i+1;
	}
	for(i=0;t[i]!='\0';i++)
	{
		if(t[i]==s[0])
		{
			for(j=0;j<a;j++)
			{
				if(t[i+j]==s[j])
				{
					b++;
				}
			}
			if(b==a)
			{
				c=i;
			}
			else
			{
				b=0;
			}
		}
	}
	printf("%d\n",c);
	return 0;
}
