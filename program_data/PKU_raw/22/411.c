
int main()
{
	int shu[301],aa,i,p,j,s[301]={0},k=1;
	char c;

	for(i=0;;)
	{scanf("%d%c",&shu[i],&c);
	 i++;
	 if(c!=',')
		 break;
	}
	if(i==1)
		printf("No");
	else
	{

	for(j=i;j>1;j--)
	{
		for(p=0;p<j-1;p++)
		{if(shu[p]>shu[p+1])
		  { aa=shu[p];
			shu[p]=shu[p+1];
			shu[p+1]=aa;}
		}
	}

	s[0]=shu[i-1];

	for(p=i-2;p>=0;p--)
	{
		for(j=i;j>p;j--)
		{if(shu[p]==shu[j])
		j=p;}

		if(j!=p-1)
		{s[k]=shu[p];
		k++;}
	}

	if(s[1]==0&&s[2]==0)
		printf("No");


	else printf("%d",s[1]);
	}
	return 0;
}


