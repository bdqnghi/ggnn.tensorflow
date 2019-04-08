int main()
{
	int i=0,j=0,len,a,b;
	char str[101],boy;
	gets(str);
	len=strlen(str);
	boy=str[0];		
	for(i=0;i<len;i++)
	{
		if(str[i]!=boy)
		{
			str[i]='0';
			for(j=i;j>0;j--)
			{
				if(str[j]==boy)break;
			}
			str[j]='0';
			a=j;b=i;
			printf("%d %d\n",a,b);
		}
		else continue;
	}
	return 0;
}
					
    