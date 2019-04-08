// #include <conio.h>
int tian[1004];
int qi[1004];
int cmp(const void *c1,const void *c2)
{
	return *(int *)c2-*(int *)c1;
}
int main()
{
	int n;	
	while(true)
	{
		scanf("%d",&n);
		if(n<=0)
			break;
		for(int i = 0;i<n;i++)
			scanf("%d",&tian[i]);
		for(int i = 0;i<n;i++)
			scanf("%d",&qi[i]);
		qsort(tian,n,sizeof(int),cmp);
		qsort(qi,n,sizeof(int),cmp);
		int ts = 0,te = n-1,qs = 0,qe = n-1;
		int nMoney = 0;
		while(ts<=te)
		{
			if(tian[ts]>qi[qs])
			{
				ts++;
				qs++;
				nMoney+=200;
			}
			else if(tian[ts]<qi[qs])
			{				
				nMoney-=200;				
				qs++;
				te--;				
			}
			else
			{
				if(tian[te]>qi[qe])
				{
					nMoney+=200;
					te--;
					qe--;
				}
				else if(tian[te]<qi[qe])
				{
					nMoney-=200;
					te--;
					qs++;
				}
				else
				{
					if(tian[te]>qi[qs])
					{
						nMoney+=200;
						te--;
						qs++;
					}
					else
					{
						if(tian[te]<qi[qs])
							nMoney-=200;
						te--;
						qs++;
					}
				}
			}
		}
		printf("%d\n",nMoney);
	}
// 	getch();
	return 0;
}