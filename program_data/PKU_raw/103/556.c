main()
{
	int a,i,j,k,num,length;
	char words[1000];
	gets(words);
	length=strlen(words);	
	for(i=0;i<length;i++)
	words[i]=toupper(words[i]);
	for(i=0;i<length;i++)
	{
			num=1;
		for(j=i;j<length;j++)
		{
			if(words[j]==words[j+1]) num++;
			else break;
		}
		if(words[i]!=words[i-1])
			printf("(%c,%d)",words[i],num);
	}

}