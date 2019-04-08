int main()
{
	int n;
	scanf("%d",&n);
	struct writer{
		int sum;
		char c;
	}lit[26]={0,'A',0,'B',0,'C',0,'D',0,'E',0,'F',0,'G',0,'H',0,'I',0,'J',0,'K',0,'L',0,'M',0,'N',0,'O',0,'P',0,'Q',0,'R',0,'S',0,'T',0,'U',0,'V',0,'W',0,'X',0,'Y',0,'Z'};
	struct book{
		int id;
		char name[26];
	}data[1000];
	int i,j,k;
	for(i=0;i<n;i++)
	{
		scanf("%d%s",&data[i].id,&data[i].name);
		for(j=0;data[i].name[j]!='\0';j++)
        {
			for(k=0;k<26;k++)
			{
				if(data[i].name[j]==lit[k].c)
					lit[k].sum++;
			}
		}
	}
	for(i=1;i<26;i++)
	{
		if(lit[i].sum<lit[i-1].sum)
		{
			struct writer tmp;
			tmp=lit[i-1];
			lit[i-1]=lit[i];
			lit[i]=tmp;
		}
	}
	printf("%c\n%d\n",lit[25].c,lit[25].sum);
	for(i=0;i<n;i++)
	{
		for(j=0;data[i].name[j]!='\0';j++)
		{
			if(data[i].name[j]==lit[25].c)
				printf("%d\n",data[i].id);
		}
	}
	return 0;
}
