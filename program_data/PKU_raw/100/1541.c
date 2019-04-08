int main ()
{
	int i,k,l,c=0,ucount[26]={0},lcount[26]={0},cmp=65;
	char hao[301];
	scanf("%s",hao);
	l=strlen(hao);
	for(i=0;i<26;i++)
	{
		for(k=0;k<l;k++)
		{
			if(hao[k]==cmp+i)
			{
				ucount[i]+=1;
			}
		}
		if(ucount[i]!=0)
		{
		   printf("%c=%d\n",cmp+i,ucount[i]);
		}
	}
	for(i=32;i<58;i++)
	{
		for(k=0;k<l;k++)
		{
			if(hao[k]==cmp+i)
			{
				lcount[i-32]+=1;
			}
		}
		if(lcount[i-32]!=0)
		{
		  printf("%c=%d\n",cmp+i,lcount[i-32]);
		}
	}
	for(i=0;i<26;i++)
	{
		if(ucount[i]==0&&lcount[i]==0)
		{
			c+=1;
		}
	}
	if(c==26)
	{
		printf("No");
	}
	return 0;
}