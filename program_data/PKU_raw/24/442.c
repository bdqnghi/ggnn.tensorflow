
int main()
{
	char s[200];
	int num,i,lens,max,min,w1,w2,len[200]={0},beg[200];
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
    max=len[1];w1=1;
	min=len[1];w2=1;
	for (i=2;i<num+1;i++)
	{
		if (max<len[i]) {w1=i;max=len[i];}
		if (min>len[i]) {w2=i;min=len[i];}
	}
	for (i=beg[w1];i<beg[w1]+len[w1];i++)
	printf("%c",s[i]);
	printf("\n");
	for (i=beg[w2];i<beg[w2]+len[w2];i++)
	printf("%c",s[i]);
	return 0;
}