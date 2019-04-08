
void Order(int house[],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(house[j]<house[j+1])
			{
				temp=house[j];
				house[j]=house[j+1];
				house[j+1]=temp;
			}
		}
	}
}

void Input(int house[],int n)
{
	int i;
	for(i=0;i<n;i++)
		{
			scanf("%d",&house[i]);
		}
}

main()
{
	int n,i,j,tianji[1000],qiwang[1000],money=0,fast=0,slowt,slowq,st,sq;
	for(i=0;1;i++)
	{
		scanf("%d",&n);
		if(n==0)
		{
			return 0;
		}else{
			Input(tianji,n);
			Order(tianji,n);
			Input(qiwang,n);
			Order(qiwang,n);
			money=0;
			fast=0;
			slowt=n-1;
			slowq=n-1;
			for(j=0;j<n;j++)
			{
				if(tianji[fast]>qiwang[j])
				{
					money++;
					fast++;
				}else if(tianji[fast]<qiwang[j]){
					money--;
					slowt--;
				}else if(tianji[fast]==qiwang[j]){
					for(st=slowt,sq=slowq;st>fast;st--,sq--)
					{
						if(tianji[st]>qiwang[sq])
						{
							money++;
							slowt--;
							slowq--;
							n--;
						}else if(tianji[st]<=qiwang[sq]){
							if(tianji[st]<qiwang[j])
							{
								money--;
								slowt=st-1;
								slowq=sq;
								break;
							}else{
								slowt=st-1;
								slowq=sq;
							}
						}
					}
				}
				if(fast>slowt)
				{
					break;
				}
			}
			printf("%d\n",money*200);
		}
	}
	return 0;
}
