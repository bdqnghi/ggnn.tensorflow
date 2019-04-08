struct book
{
	int num;
	char edt[27];
};
struct total   //??????????????
{
	char name;
	int amount;
};
int main()
{
	int m,i,j,k;
	struct book bk[1000];
	struct total to[27];
	scanf("%d",&m);
	for(i=0;i<m;i++)
		scanf("%d %s",&bk[i].num,bk[i].edt);
	for(i=0;i<26;i++)
	{
		to[i].name='A'+i;//????26???
		to[i].amount=0;
	}
	//???????????
	for(i=0;i<m;i++)
	{
		for(j=0;j<strlen(bk[i].edt);j++)
		{
			for(k=0;k<26;k++)
			{
				if(bk[i].edt[j]==to[k].name)
					to[k].amount ++;
			}
		}
	}
	//???????????????to[k]??
	for(i=k=0;i<26;i++)
	{
		if(to[i].amount>to[k].amount )
			k=i;
	}
	printf("%c\n%d\n",to[k].name ,to[k].amount );
	//??????????
	for(i=0;i<m;i++)
	{
		for(j=0;j<strlen(bk[i].edt);j++)
			if(bk[i].edt[j]==to[k].name)
				printf("%d\n",bk[i].num);
	}
	return 0;
}