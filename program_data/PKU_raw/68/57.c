int main()
{
	int x,i,j,k=0,p[N],a[N]={0,0};
	for(i=2;i<N;i++)p[i]=1;
	//for(i=0;i<N;i++)b[i]=i;
	for(i=2;i<N;i++)
	if(p[i])
	{a[k++]=i;
	for(j=1;i*j<N;j++)
	p[i*j]=0;
	}
	for(x=6;x<=N;x+=2)
	{for(i=0;a[i]!=0;i++)
	for(j=i;j<N;j++)
    if(x==a[i]+a[j]) printf("%d=%d+%d\n",x,a[i],a[j]);
 return 0;
 }
}