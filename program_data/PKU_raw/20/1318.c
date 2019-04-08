int main()
{
	int i,l,m=0;
	char str[20]={'0'},substr[4]={'0'},max=0;
	while(1)
	{
		scanf("%s %s",str,substr);
		if(str[0]==0) break;

l=strlen(str);
		for(i=0;i<l;i++)
		{
			if(str[i]>max)
			{
				max=str[i];
				m=i;
			}
		}
		if(m==l-1)
		{
			for(i=l;i=l+2;i++)
				str[i]=substr[i-l];
		}
		else
		{
			for(i=l-1;i>m;i--)
				str[i+3]=str[i];
			for(i=m+1;i<m+4;i++)
				str[i]=substr[i-m-1];
		}
		printf("%s\n",str);m=0;max=0;
for(i=0;i<20;i++) str[i]=0;for(i=0;i<3;i++) substr[i]=0;
	}
	return 0;
}