int MyCmp(const void * e1,const void * e2)
{
	int * p1=(int *)e1;
	int * p2 = ( int * )e2 ;
	return (*p2) - (*p1);
}
int main ()
{
	int n,i,sum;
	int front2,back2,front,back;
	int a[1010],b[1010];
	while(cin>>n)
	{
		if(n==0)
			break;
		sum=0;
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=0;i<n;i++)
			cin>>b[i];
		qsort(a,n,sizeof(int),MyCmp);
		qsort(b,n,sizeof(int),MyCmp);
		front2=front=0;
		back2=back=n-1;
		while(front2<=back2)
		{
			if(a[front]>b[front2])
			{
				front++;
				front2++;
				sum+=200;
			}
			else if(a[front]==b[front2] )
			{
				while(front <= back)
				{
					if(a[back]>b[back2])
					{
						sum+=200;
						back--;
						back2--;
					}
					else
					{
						if(a[back]<b[front2])
							sum-=200;
						back--;
						front2++;
						break;
					}
				}
			}
			else
			{
				//if(a[back]<b[counter])
					sum-=200;
				back--;
				front2++;
			}
		}
		cout<<sum<<endl;
	}
	return 0;
}