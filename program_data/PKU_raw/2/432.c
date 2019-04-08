struct book
{
	int H;
	char writer[26];
}b[max];
int main()
{
	int m,i,j,k,sum[26]={0},t,Max,g;
	char y;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%d %s",&b[i].H,b[i].writer);
		t=strlen(b[i].writer);
		for(j=0;j<t;j++)
		{
			k=b[i].writer[j]-65;
			sum[k]++;
		}
	}
	Max=sum[0];
	for(i=0;i<26;i++)
	{
		if(sum[i]>Max)
			Max=sum[i];
	}
	for(i=0;i<26;i++)
	{
		if(sum[i]==Max)
		{
			y=i+65;
			printf("%c\n%d\n",y,Max);
		}
	}
	for(i=0;i<m;i++)
	{
		g=0;
		t=strlen(b[i].writer);
		for(j=0;j<t;j++)
		{
		if(b[i].writer[j]==y)
		{
			g++;
			break;
		}
		}
		if(g!=0)
			printf("%d\n",b[i].H);
	}
	return 0;
}

