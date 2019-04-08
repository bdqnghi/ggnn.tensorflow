
int qi[1001];
int tian[1001];

int cmp(const void *e1,const void *e2)
{
	return *(int*)e2-*(int*)e1;
}

int main()
{
	int n;
	int count;
	while(cin>>n)
	{
		if(n==0) break;
		count=0;
		int i,j;
		for(i=0;i<n;i++)
			cin>>tian[i];
		for(i=0;i<n;i++)
			cin>>qi[i];

		qsort(tian,n,sizeof(int),cmp);
		qsort(qi,n,sizeof(int),cmp);

		int l=0,m=0;
		for(i=n-1,j=n-1;i>=l&&j>=m;)
		{
			if(tian[i]<qi[j])
			{
				count--;
				i--;
				m++;
			}
			else if(tian[i]>qi[j])
			{
				count++;
				i--;
				j--;
			}
			else
			{
				if(tian[l]>qi[m])
				{
					count++;
					l++;
					m++;
				}
				else
				{
					if(qi[m]!=tian[i])count--;
					m++;
					i--;
				}
			}
		}
		cout<<count*200<<endl;
	}
	return 0;
}