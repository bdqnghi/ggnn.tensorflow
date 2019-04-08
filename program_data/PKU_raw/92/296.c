int mycompare(const void * e1,const void * e2)
{
	int * p1,*p2;
	p1=(int*)e1;
	p2=(int*)e2;
	return (*p2)-(*p1);
};
int main()
{
	int p,count,n,a[1001],b[1001],s1,s2,e1,e2,i;
	cin>>n;
	while(n!=0)
	{

		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<n;i++)
		{
			cin>>b[i];
		}	
		count=0;
		qsort(a,n,sizeof(int),mycompare);
		qsort(b,n,sizeof(int),mycompare);
		s1=s2=0;
		e1=e2=n-1;
		for(p=0;p<n;p++)
		{
			if(a[s1]>b[s2])
			{
				count++;
				s1++;
				s2++;
			}
			else
			{
				if(a[e1]>b[e2])
				{
					e1--;
					e2--;
					count++;
				}
				else
				{
					if(a[e1]<b[s2])
					{
						count--;
					}			
					e1--;
					s2++;
				}
			}
		}
		cout<<count*200<<endl;
		cin>>n;
	}
	return 0;
}

