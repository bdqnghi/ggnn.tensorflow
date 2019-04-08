
void main()
{
	char str[16], substr[4];
	int i, lenth;
	int maxAsc=0;
	char maxChar=0;
	while(scanf("%s%s",str,substr)==2)
	{
		maxAsc=0;
		maxChar=0;
		lenth=strlen(str);
		for(i=0;i<lenth;i++)
		{
			if(maxChar<*(str+i))
			{
				maxChar=*(str+i);
				maxAsc=i;
			}
		}
		str[lenth+3] = 0;
		for(i=lenth-1;i>maxAsc;i--)
		{
			*(str+i+3)=*(str+i);
		}
		for(i=0;i<3;i++)
		{
			*(str+maxAsc+i+1)=*(substr+i);
		}
		printf("%s\n",str);
	}
}
