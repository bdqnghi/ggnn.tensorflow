char x[100000],y[100000],range[100000],flag[100000];
int time[100000];
int main()
{
	int n,i,j;
	scanf("%d",&n);
	int k=0;
	while(k<n)
	{
		scanf("%s",x);
		int len=strlen(x);
		strcpy(y,x);
		char t;
		for(i=0;i<len-1;i++)
		{
			for(j=0;j<len-1-i;j++)
			{
				if(y[j]>y[j+1])
				{
					t=y[j];
					y[j]=y[j+1];
					y[j+1]=t;
				}
			}
		}
		for(i=0;i<100000;i++)
			time[i]=1;
		flag[0]=y[0];
		int p=0;
		for(i=0;i<len-1;i++)
		{
			if(y[i]==y[i+1])
				time[p]++;
			else
				flag[++p]=y[i+1];
		}
		int m=0;
		int biaoji=0;
		for(i=0;i<=p;i++)
		{
			if(time[i]==1)
			{	
				range[m++]=flag[i];
				biaoji=1;
			}
		}
		int ting=0;
		if(biaoji==0)printf("no\n");
		else
		{
			for(i=0;i<len;i++)
			{
				for(j=0;j<m;j++)
				{
					if(x[i]==range[j])
					{
						printf("%c\n",x[i]);
						ting=1;
						break;
					}
				}
				if(ting==1)break;
			}
		}
		k++;
		memset(x,0,sizeof(x));
		memset(y,0,sizeof(y));
		memset(range,0,sizeof(range));
		memset(flag,0,sizeof(flag));
	}
	return 0;
}