int f(int i)
{
	int j,w;
	w=0;
	if(i<=2)w=1;
	else
	for(j=2;j<i;j++)
		if(i%j==0)w=1;
	return(w);
}

void main()
{
int m,n,i,num[100],j,a,sum,I,w,ans[100],K,k;
scanf("%d %d",&m,&n);
for(i=m,k=0,w=0;i<=n;i++)
{
	I=i;
	a=(int)log10(i);
	for(j=1;j<=a+1;j++)
	{
		num[j]=i/(int)pow(10,a-j+1);
		i=i%(int)pow(10,a-j+1);
	}
	for(j=a+1,sum=0;j>=1;j--)
	sum=sum+num[j]*(int)pow(10,j-1);
	if(I==sum)
		if(f(I)==0)
		{ans[k]=I;k++;}
	i=I;
}
if(k==0)printf("no");
else 
{
K=k-1;
for(k=0;k<K;k++)printf("%d,",ans[k]);
printf("%d",ans[k]);
}
}