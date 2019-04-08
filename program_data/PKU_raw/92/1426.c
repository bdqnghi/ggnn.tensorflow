
int Comp(const void *p1, const void *p2)
{
	return *((int *)p1) > *((int *)p2) ? -1:1;
}


int main()
{
	int tian[2000],qi[2000];
	int n;
	int count;
	int a_first,a_end,b_first,b_end;
	while(cin>>n)
	{
		if(n == 0) break;
		for(int i = 0 ; i < n; i++)
		{
			cin>>tian[i];
		}
		for(int i = 0; i < n; i++)
		{
			cin>>qi[i];
		}
	
		qsort(tian,n,sizeof(int),Comp);
		qsort(qi,n,sizeof(int),Comp);
		count = 0;
		a_first = 0;
		a_end = n - 1;
		b_first = 0;
		b_end = n - 1;
		while(a_first <= a_end)
		{
			//cout<<a_first<<" "<<a_end<<" "<<b_first<<" "<<b_end<<endl;
			//cout<<tian[a_first]<<" "<<qi[b_first]<<endl;
			if(tian[a_first] > qi[b_first])
			{
				count++;
				a_first++;
				b_first++;
			}
			else if(tian[a_end] > qi[b_end])
			{
				count++;
				a_end--;
				b_end--;
			}
			else if(tian[a_first] == qi[b_first])
			{
				if(tian[a_end] > qi[b_first])
				{
					count++;
					a_end--;
					b_first++;
				}
				else if(tian[a_end] == qi[b_first])
				{
					a_end--;
					b_first++;
				}
				else if(tian[a_end] < qi[b_first])
				{
					count--;
					a_end--;
					b_first++;
				}
			}
			else
			{
				if(tian[a_end] > qi[b_first])
				{
					count++;
					a_end--;
					b_first++;
				}
				else if(tian[a_end] == qi[b_first])
				{
					a_end--;
					b_first++;
				}
				else if(tian[a_end] < qi[b_first])
				{
					count--;
					a_end--;
					b_first++;
				}
			}
		}
		cout<<count*200<<endl;
	}
	return 0;
}