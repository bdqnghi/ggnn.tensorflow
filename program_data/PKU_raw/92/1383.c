int main()
{
	int n;
	int i,j,k;
	//int ftianji,ltianji;
	//int fqiwang,lqiwang;
	int tianji[1000];
	int qiwang[1000];
	int temptianji,tempqiwang;
	int money;
	int win,tie,lose;
	scanf("%d",&n);
	while(n!=0)
	{
	win = 0,tie = 0,lose = 0;
	for(i = 0;i < n;i++)
		scanf("%d",&tianji[i]);
	for(i = 0;i < n;i++)
		scanf("%d",&qiwang[i]);
	for(j = 0;j < n;j++)
	{
		for(k = 0;k < n - j - 1;k ++)
		{
		if(tianji[k] < tianji[k + 1])
			{
				temptianji = tianji[k];
				tianji[k] = tianji[k + 1];
				tianji[k + 1] = temptianji;
			}
		}
	}
	for(j = 0;j < n;j++)
	{
		for(k = 0;k < n - j - 1;k ++)
		{
		if(qiwang[k] < qiwang[k + 1])
			{
				tempqiwang = qiwang[k];
				qiwang[k] = qiwang[k + 1];
				qiwang[k + 1] = tempqiwang;
			}
		}
	}
	int tstart = 0;
	int tlast = n - 1;
	int kstart = 0;
	int klast = n - 1;
	int cnt = 0;//???
  for(i = 0;i < n;i++)//????????????   
  {   
   if(tianji[tstart]>qiwang[kstart])//tstart????????????????tianji???????   
   {   
    cnt++;   
    tstart++;   
    kstart++;   
    continue;   
   }   
   if(tianji[tstart]<qiwang[kstart])//tianji????tianji???????????   
   {   
    cnt--;   
    kstart++;   
    tlast--;   
    continue;   
   }   
   if(tianji[tstart] == qiwang[kstart])//??????   
   {   
    if(tianji[tlast] < qiwang[klast])//tianji?????????????????????   
    {   
     tlast--;   
     kstart++;   
     cnt--;   
     continue;   
    }   
    if(tianji[tlast] > qiwang[klast])//tianji?????????????????   
    {   
     tlast--;   
     klast--;   
     cnt++;   
     continue;   
    }   
    if(tianji[tlast] == qiwang[klast])//?????? ???tianji?????????   
    {   
     if(tianji[tlast] < qiwang[kstart])//??tianji??????????cnt?1   
      cnt--;   
     kstart++;   
     tlast--;   
    }   
   }   
  }
	money = 200 * cnt;
	printf("%d\n",money);
	scanf("%d",&n);
	}
	return 0;
}

