int n;
int cmp(const void *x,const void *y)
{
	return *(int *)y - *(int *)x;//
}
int pk(int a[],int b[])
{
	int i=0,j=0,k=n-1,l=n-1;
	int sum=0;
	int w=0,lose=0;
	while(i<=k)
	{

		if(a[k]>b[l])
		{
			sum+=200;
			w++;
			k--;
			l--;
		}
		else if(a[k]<b[l])
		{
			sum-=200;
			lose++;
			k--;
			j++;
		}	
		else
		{
			if(a[i]>b[j])
			{
				sum+=200;
				w++;
				i++;
				j++;
			}	
			else 
			{
				if(a[k]<b[j])
				{
					sum-=200;
					lose++;
				}
				k--;
				j++;
			}
				
		}
	}
	return sum;
}
int main()
{	
	int a[1001],b[1001];
	while(cin>>n&&n!=0)
	{
		memset(a,0,sizeof a);
		memset(b,0,sizeof b);
		int i;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<n;i++)
		{
			cin>>b[i];
		}
		qsort(a,n,sizeof a[0],cmp);
		qsort(b,n,sizeof b[0],cmp);
		cout<<pk(a,b)<<endl;
	}
	return 0;
}

