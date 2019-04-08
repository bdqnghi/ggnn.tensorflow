	struct 
	{
	char id[11];
	int nianling;
	}bing[100];


int main()
{
		int n,i,j,e;
	int youxian[100]={0};
	int zhengchang[100]={0};
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d", bing[i].id,&bing[i].nianling);
		if(bing[i].nianling>=60)  youxian[i]=bing[i].nianling;
		else zhengchang[i]=bing[i].nianling;
	}
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(youxian[j]<youxian[j+1])
			{
				e=youxian[j+1];
				youxian[j+1]=youxian[j];
				youxian[j]=e;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(bing[j].nianling==youxian[i])
			{
				printf("%s\n", bing[j].id);
				bing[j].nianling=-1;
				break;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		    if(bing[j].nianling==zhengchang[i])
			{
				printf("%s\n", bing[j].id);
				bing[j].nianling=-1;
				break;
			}
		}
	}



	return 0;
}

