void main()
{
	int num[300],n,word,k,i;
	char str[10000];
	int *pnum;
	char *pstr;
	gets(str);
	k=strlen(str);
	pstr=str;
	pnum=num;
	for(i=0;i<300;i++)
	{
		*pnum=0;
		pnum++;
	}
	pnum=num;
	word=1;
	n=0;
	for(pstr=str;pstr<str+k;pstr++)
	{
		if(*pstr==' ')
		{
			if(word==0)
			{
				word=1;
				n++;
				pnum++;
			}
		}
		else 
		{
			word=0;
			(*pnum)++;
		}
	}
	for(pnum=num;pnum<num+n;pnum++)
		printf("%d,",*pnum);
	printf("%d",*pnum);
}



