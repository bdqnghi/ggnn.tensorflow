int main()
{
	int n,i,j,p=0,q=0;
	char tmp[10];
	double man[50],woman[50],temp;
	int flag=0;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%s",tmp);
		if(tmp[0]=='f')
		scanf("%lf",&woman[p++]);
		else scanf("%lf",&man[q++]);
	}
	for(i=p-1;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			if(woman[j]<woman[j+1])
			{
				temp=woman[j];
				woman[j]=woman[j+1];
				woman[j+1]=temp;
			}
		}
	}
	for(i=q-1;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			if(man[j]>man[j+1])
			{
				temp=man[j];
				man[j]=man[j+1];
				man[j+1]=temp;
			}
		}
	}
	for(i=0;i<q;i++)
	{
		if(flag==0) flag=1;
		else printf(" ");
		printf("%.2f",man[i]);
	}
	for(i=0;i<p;i++)
	{
		if(flag==0) flag=1;
		else printf(" ");
		printf("%.2f",woman[i]);
	}
}