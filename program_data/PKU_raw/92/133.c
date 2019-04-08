int cmp(const void *elem1,const void *elem2)
{
	int *p1,*p2;
	p1=(int *)elem1;
	p2=(int *)elem2;
	return *p2 - *p1;
}
int main()
{
	int mon=0;
	int a[1001];
	int b[1001];
	int n;
	while(cin>>n)
	{
		if(n==0)
		{
			break;
		}
		mon=0;
		int i;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<n;i++)
		{
			cin>>b[i];
		}
		int k,l,j;
		qsort(a,n,sizeof(int),cmp);
		qsort(b,n,sizeof(int),cmp);
		k=0;
		l=n-1;
		j=n-1;
		for(i=0;i<=j;i++)
		{
			if(a[k]>b[i])
			{
				mon+=200;
				k++;
				continue;
			}
			else if(a[k]<b[i])
			{
				mon-=200;
				l--;
				continue;
			}
			else
			{	
				if(a[l]>b[j])
				{
					l--;
					j--;
					i--;
					mon+=200;
					continue;
				}
				else if(a[l]<b[j])
				{
					l--;
					mon-=200;
					continue;
				}
				else
				{
					if(a[l]==b[i])
					{
						l--;
						continue;
					}
					else
					{
						mon-=200;
						l--;
						continue;
					}
				}
			}

		}
		cout<<mon<<endl;
	}
	return 0;
}
