
int cmp(const void* a,const void* b)
{
	return *(int*)b - *(int*)a;
}

int main()
{
	int na[1010];
	int nb[1010];
	int n;
	while(cin>>n,n!=0)
	{
		int i,j,r;
		int head=0, t_tail=n-1, q_tail=n-1;
		int result=0;

		for(i=0;i<n;i++)
			cin>>na[i];
		for(i=0;i<n;i++)
			cin>>nb[i];
		qsort(na,n,sizeof(na[0]),cmp);
		qsort(nb,n,sizeof(nb[0]),cmp);
		for(i=0;i<n;i++)
		{
			if(na[head] > nb[i])
			{
				head++;
				result++;
			}
			else if(na[head] < nb[i])
			{
				result--;
				t_tail--;
			}
			else
			{
				while(t_tail >= head)
				{
					if(na[t_tail] > nb[q_tail])
					{
						result++;
						t_tail--;
						q_tail--;
					}
					else
					{
						if(na[t_tail] < nb[i])
							result--;
						t_tail--;
						
						break;
					}
				}
			}
			if(head > t_tail)
				break;
		}
		cout<<200*result<<endl;
	}
	return 0;
}