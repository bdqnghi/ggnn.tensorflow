int main()
{
	int i,j,k,l,count;
	char s[105],head;
	gets(s);
	l=strlen(s);
	count=0;
	for(;;)
	{
		for(i=0;i<l;i++)
		{
			if(s[i]==' ') i++;
			else 
			{
				head=s[i];
				break;
			}
		}
		for(j=i;j<l;j++)
		{
			if(s[j]!=' '&&s[j]!=head)
			{
				for(k=j-1;k>=0;k--)
				{
					if(s[k]!=' ') break;
				}
				printf("%d %d\n",k,j);
				s[k]=' ';s[j]=' ';
			}
		}
		count+=2;
		if(count==l) break;
	}
	return 0;
}