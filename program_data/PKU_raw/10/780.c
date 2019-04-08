


int main()
{
	int k,a[25],i,b[25],j,p,max=0,q,t;
for(t=0;t<25;t++)b[t]=1;
	scanf("%d",&k);
	for(i=0;i<k;i++)
		scanf("%d",&a[i]);
	b[k-1]=1;
	for(j=k-2;j>=0;j--)
	{for(p=j+1;p<k;p++)
		{if(a[p]<=a[j]&&b[j]<b[p]+1)
		b[j]=b[p]+1;}}
	for(q=0;q<k;q++)
	{if(b[q]>max)max=b[q];}
	printf("%d",max);




		return 0;
}

