
int main()
{
	char s[200];
	int num,i,lens,max,min,w1,w2,len[200]={0},beg[200],j;
	gets(s);
	num=1;
	beg[1]=0;
	lens=strlen(s);
	for (i=0;i<lens;i++)
	{
		if(s[i]==' ')
		{
			num++;
			beg[num]=i+1;
			len[num]=-1;
		}
		len[num]++;
	}
    
	for(i=num;i>1;i--)
	{
		for (j=beg[i];j<beg[i]+len[i];j++)
	          printf("%c",s[j]);
		printf(" ");
	}
	for (j=beg[1];j<beg[1]+len[1];j++)
	          printf("%c",s[j]);

	return 0;
}
