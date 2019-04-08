int Compare(const void *e1,const void *e2)
{
	int *p1,*p2;
	p1=(int *)e1;
	p2=(int *)e2;
	return (*p2)-(*p1);
}

int main()
{
	int a[1001],b[1001],n,i;
	int l1,l2 ,r1,r2,ying;
	while(cin>>n)
	{
		if(n==0)
			break;
		else
		{
			ying=0;
			l1=0;
			l2=0;
			r2=n-1;
			r1=n-1;
			for(i=0;i<n;i++)
				cin>>a[i];
			for(i=0;i<n;i++)
				cin>>b[i];
			qsort(a,n,sizeof(int),Compare);
			qsort(b,n,sizeof(int),Compare);
			while(l1<r1&&l2<r2)
			{
				if(a[l1]>b[l2])
				{
					ying++;
					l1++;
					l2++;
				}
				else
				{
					if(a[l1]<b[l2])
					{
						ying--;
						l2++;
						r1--;
					}
					else
					{
						if(a[r1]>b[r2])
						{
							ying++;
							r1--;
							r2--;
						}
						else
						{
							if(a[r1]==b[r2])
							{
								if(b[l2]>a[r1])
								    ying--;
								l2++;
								r1--;
							}
							else
							{
								ying--;
								r1--;
								l2++;
							}
						}
					}
				}
			}
			if(a[l1]>b[l2])
				ying++;
			if(a[l1]<b[l2])
				ying--;
		    cout<<200*ying<<endl;
		}
	}
	return 0;
}
