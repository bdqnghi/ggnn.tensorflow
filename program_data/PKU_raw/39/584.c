void main()
{
	int n,qimo[100],banji[100],lunwen[100];
	int i,j;int jiangxuejing[100];int sunxu[100];
	char xingming[100][20],ganbu[100],xibu[100];
	scanf("%d",&n);
	for(i=0;i<=n-1;i++)
	{
	 scanf("%s %d %d %c %c %d",xingming[i],&qimo[i],&banji[i],&ganbu[i],&xibu[i],&lunwen[i]);
	 sunxu[i]=i;
	}
	for(i=0;i<=n-1;i++)
	{   
		int a=0,b=0,c=0,d=0,e=0;
		if(qimo[i]>80&&lunwen[i]>=1)
		{a=a+1;}
		if(qimo[i]>85&&banji[i]>80)
		{b=b+1;}
		if(qimo[i]>90)
		{c=c+1;}
		if(qimo[i]>85&&xibu[i]=='Y')
		{d=d+1;}
		if(banji[i]>80&&ganbu[i]=='Y')
		{e=e+1;}
		jiangxuejing[i]=a*8000+b*4000+c*2000+d*1000+e*850;
	}
	int t,k,p;char c;
	for(i=0;i<=n-2;i++)
		for(j=0;j<=n-2-i;j++)
		{
			if(jiangxuejing[j]<jiangxuejing[j+1])
			{
				t=jiangxuejing[j];
				jiangxuejing[j]=jiangxuejing[j+1];
				jiangxuejing[j+1]=t;
				p=sunxu[j];
				sunxu[j]=sunxu[j+1];
				sunxu[j+1]=p;
				for(k=0;k<=19;k++)
				{
					c=xingming[j][k];
					xingming[j][k]=xingming[j+1][k];
					xingming[j+1][k]=c;
				}
			}
		}
		int max=0;
		for(i=0;i<=n-1;i++)
		{
			if(jiangxuejing[i]>max)
			{max=jiangxuejing[i];}
		}
		int jishuqi=0;
		for(j=0;j<=n-1;j++)
		{
			if(jiangxuejing[j]==max)
			{jishuqi=jishuqi+1;}
		}
		int m=0;
		for(i=0;i<=n-1;i++)
		{m=m+jiangxuejing[i];}
		if(jishuqi==1)
		{
		printf("%s\n",xingming[0]);
		printf("%d\n",jiangxuejing[0]);
		printf("%d\n",m);
		}
		if(jishuqi>1)
		{
			for(i=0;i<=jishuqi-2;i++)
				for(j=0;j<=jishuqi-2-i;j++)
			{
				if(sunxu[j]>sunxu[j+1])
				{
					t=sunxu[j];
					sunxu[j]=sunxu[j+1];
					sunxu[j+1]=t;
					for(k=0;k<=99;k++)
					{
					   c=xingming[j][k];
					   xingming[j][k]=xingming[j+1][k];
				       xingming[j+1][k]=c;
					}
				}
			}
             printf("%s\n",xingming[0]);
		     printf("%d\n",jiangxuejing[0]);
		     printf("%d\n",m);
		}
}