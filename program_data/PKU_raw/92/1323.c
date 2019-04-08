int TianJi[1000]={0},QiWang[1000]={0};
int cmp(const void * elem1, const void * elem2)
{
	int * p1=(int *)elem1;
	int * p2=(int *)elem2;
	if(*p1<*p2)
		return -1;
	else if(*p1==*p2)
		return 0;
	else return 1;
}
int main()
{
	int n,i,j,sum,equalnum,equalhorse;
	while(1)
	{
		scanf("%d",&n);
		if(n==0)
			break;
		for(i=0;i<n;i++)
			scanf("%d",&TianJi[i]);
		for(i=0;i<n;i++)
			scanf("%d",&QiWang[i]);
		qsort(TianJi,n,sizeof(int),cmp);
		qsort(QiWang,n,sizeof(int),cmp);
		j=0;
		sum=0;
		equalnum=0;
		equalhorse=0;
		for(i=0;i<n;i++)
		{
			if(TianJi[i]>QiWang[j])
			{
				sum+=200;
				j++;
			}
			else if(TianJi[i]==QiWang[j])
			{
				if(equalnum>0)
				{
					if(TianJi[i]>equalhorse)
					{
						equalnum--;
						sum+=200;
						continue;
					}
				}
				equalhorse=TianJi[i];
				equalnum++;
				j++;
			}
			else
			{
				if(equalnum>0)
				{
					if(TianJi[i]>equalhorse)
					{
						equalnum--;
						sum+=200;
					}
				}
			}
		}
		sum=sum-(n-j)*200;
		printf("%d\n",sum);
	}
	return 0;
}