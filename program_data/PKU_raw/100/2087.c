int main()
{
	char a[300];int zm[100];int zmnum[100]={0};
	gets(a);
	int i,k,j;
	int t=0;int ch;
	for(i=0;(k=a[i])!='\0';i++)
	{
		if(((int)a[i]>=65&&(int)a[i]<=90)||((int)a[i]>=97&&(int)a[i]<=122))
		{
			zm[t]=(int)a[i];
			zmnum[t]++;
			for(j=0;(k=a[j])!='\0';j++)
			{
				if((int)a[j]==(int)a[i]&&j!=i)
				{
					a[j]='0';
					zmnum[t]++;
				}
			}
			t++;
		}
		
	}
	
	for(i=0;i<t-1;i++)
	{
		for(j=0;j<t-i-1;j++)
		{
			if(zm[j]>zm[j+1])
			{
				ch=zm[j];
				zm[j]=zm[j+1];
				zm[j+1]=ch;
				ch=zmnum[j];
				zmnum[j]=zmnum[j+1];
				zmnum[j+1]=ch;
			}
		}
	}
	if(t==0)
		printf("No");
	else
		 for(i=0;i<t;i++)
	{
		
		printf("%c=%d\n",zm[i],zmnum[i]);
	}
	
	scanf("%d",&i);
	return 0;
}