int main()
{
	int m,n,flag[100000],i,j,flagio=0,temp;
	int judge(int k);
	scanf("%d %d",&m,&n);
	temp=m;
	for(i=m;i<=n;i++)flag[i]=1;
	for(i=m;i<=n;i++)for(j=2;j<=sqrt(i);j++)if(i%j==0)flag[i]=0;
	for(i=m;i<=n;i++)if((flag[i])&&(judge(i))){temp=i;printf("%d",i);flagio=1;break;}
	for(i=temp+1;i<=n;i++)if((flag[i])&&(judge(i)))printf(",%d",i);
	if(flagio==0)printf("no");
	return 0;
}
int judge(int k)
{
	int i=0,l,sum=0,scale=1,tem;
	tem=k;
	while(k>=pow(10,i))i++;
	i--;
	while(i>=0)
	{
		l=k/pow(10,i);
		sum=sum+l*scale;
		k=k-l*pow(10,i);
		scale=scale*10;
		i--;
	}
	if(sum==tem)return(1);
	else return(0);
}