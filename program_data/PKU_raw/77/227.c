
void bubble(int array[],int n);
void main()
{
	struct answer
	{
		int girl;
		int boy;
	};
	char test[MAXSIZE]={'\0'},boy,girl;
	int len,i,j,p;
	struct answer ans[MAXSIZE]={0,0},temp;
	
	scanf("%s",test);
	len=strlen(test);
	boy=test[0];
	girl=test[len-1];
	
	p=0;
	for(i=0;i<len;i++)
	{
		if(test[i]==girl)
		{
			for(j=i-1;j>=0;j--)
			{
				if(test[j]==boy)
				{
					ans[p].boy=j;
					ans[p].girl=i;
					test[i]=girl+boy;
					test[j]=girl+boy;
					p++;
					break;
				}
			}
		}
	}
	
	for(j=1;j<=p;j++)
	{
		for(i=0;i<p-j;i++)
		{
			if(ans[i].girl>ans[i+1].girl)
			{
				temp=ans[i];
				ans[i]=ans[i+1];
				ans[i+1]=temp;
			}
		}
	}

	for(i=0;i<p;i++)
	{
		printf("%d %d\n",ans[i].boy,ans[i].girl);
	}
}

