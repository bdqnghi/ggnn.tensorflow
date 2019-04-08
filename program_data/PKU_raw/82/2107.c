int Ok(int a,int b);
int max(int a[],int n);
int n,high[100],low[100],length[100];
int main()
{
    int i,t=0;
	scanf("%d",&n);
	for(i=0;i<100;i++)
		length[i]=0;
	for(i=0;i<n;i++)
		scanf("%d%d",&high[i],&low[i]);
	for(i=0;i<n;i++)
		if (Ok(high[i],low[i])==1)
			switch (Ok(high[i+1],low[i+1])){
			case 1:length[t]+=1;break;
			case 0:length[t++]+=1;
		}
	printf("%d",max(length,t));
	return 0;
}	
int Ok(int a,int b)
	{
		return a>=90&&a<=140&&b>=60&&b<=90;
	}
int max(int a[],int n)
{
	int i,MAX;
	MAX=*a;
	for (i=1;i<n;i++)
		if(MAX<*(a+i))
			MAX=*(a+i);
		return MAX;
}
