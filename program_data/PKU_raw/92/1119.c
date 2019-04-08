int find(int a[],int i,int j)
{
	int key=a[i],k,flag=0;
	for(k=i+1;k<=j;k++)
		if(a[k]>key)return k;
		else if(a[k]<key)return i;
	return -1;
}
int partition(int a[],int i,int j,int pivot)
{
	int ta,l=i,r=j;
	do{
		ta=a[l];
		a[l]=a[r];
		a[r]=ta;
		while(a[l]>=pivot)l++;
		while(a[r]<pivot)r--;
	}while(l<=r);
	return l;
}
void quicksort(int a[],int i,int j)
{
	int pindex,pivot,k;	
	pindex=find(a,i,j);
	if(pindex>=0)
	{
		pivot=a[pindex];
		k=partition(a,i,j,pivot);
		quicksort(a,i,k-1);
		quicksort(a,k,j);
	}
}


int main()
{
	int n,i,j,k,t_max,t_min,q[1000],t[1000],win,loss;
	while(1)
	{
		scanf("%d",&n);
		if(n==0)
			return 0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&t[i]);
		}
		for(i=0;i<n;i++)
		{
			scanf("%d",&q[i]);
		}
		quicksort(t,0,n-1);
		quicksort(q,0,n-1);
		t_max=0;
		t_min=n-1;
		win=loss=0;
		for(i=0;i<n;i++)
		{
			if(t[t_max]>q[i])
			{
				win++;
				t_max++;
			}
			else if(t[t_max]<q[i])
			{
				loss++;
				t_min--;
			}
			else if(t[t_max]==q[i])
			{
				for(j=i+1,k=t_max+1;j<n;j++,k++)
				{
					if(t[k]<=q[j]&&t[t_max]>q[j])
						break;
				}
				if(j<n)
				{
					if(t[t_min]<q[i])
						loss++;
					t_min--;
				}
				else t_max++;
			}
		}
		printf("%d\n",200*(win-loss));
	}
}