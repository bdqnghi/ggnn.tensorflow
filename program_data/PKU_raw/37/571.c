int main()
{
	int t,i,len,j,a=0,b=1;
	char zfc[100];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%s",zfc);
		len=strlen(zfc);
		for(a=0;a<len;a++)
		{
			for(j=a+1;j<len;j++)
			{
				if(zfc[a]==zfc[j])
				{
					b=0;
					zfc[j]='0';
					break;
				}
				else if(zfc[a]!='0')
					b=1;
			}
			if(b==1)
			{
				break;
			}
			else if(a==len)
			{
				b=0;
				break;
			}
		}
		if(b==1)
		{
			printf("%c\n",zfc[a]);
		}
		else
			printf("no");
	}

	return 0;
}
