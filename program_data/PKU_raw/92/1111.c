
int CMP(const void * ele1, const void * ele2)
{
	return *((int *)ele2) - *((int *)ele1);
}

int main()
{
	int n;
	int i,counter,qiwangleft,qiwangright,tianjileft,tianjiright;
	int tianji[1006],qiwang[1006],ans;
	while (cin>>n)
	{
		if ( n==0 )
			break;
		for ( i=0;i<n;i++ )
			cin>>tianji[i];
		for ( i=0;i<n;i++ )
			cin>>qiwang[i];
		qsort(tianji,n,sizeof(int),CMP);
		qsort(qiwang,n,sizeof(int),CMP);

		qiwangleft = 0;
		tianjileft = 0;
		qiwangright = n-1;
		tianjiright = n-1;
		counter = 0;
		ans = 0;
		while ( counter!=n )
		{
			counter++;
			if ( qiwang[qiwangleft] < tianji[tianjileft] )
			{
				qiwangleft++;
				tianjileft++;
				ans += 200;
			}
			else if ( qiwang[qiwangleft] == tianji[tianjileft] )
			{
				if ( qiwang[qiwangright] < tianji[tianjiright] )
				{
					ans += 200;
					qiwangright--;
					tianjiright--;
				}
				else
				{
					if ( qiwang[qiwangleft] > tianji[tianjiright] )
					{
						ans -= 200;
					}
					qiwangleft++;
					tianjiright--;
				}
			}
			else
			{
				ans -= 200;
				qiwangleft++;
				tianjiright--;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}