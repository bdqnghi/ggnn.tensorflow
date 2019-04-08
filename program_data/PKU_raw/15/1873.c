int a[1000][1000];
int main()
{
	int n;
	scanf("%d",&n);
	int p,q;
	for(p=0;p<n;p++)
	{
		for(q=0;q<n;q++)
		{
			scanf("%d",&(a[p][q]));
		}
	}
	int p1=0,p2=0,q1,q2;
	for(p=0;p<n;p++)
	{
		for(q=0;q<n;q++)
		{
			if(a[p][q]==0)
			{
				p1=p;
				q1=q;
				break;
				
			}
			if(p1!=0)
			break;
				
		}
		if(p1!=0)
			break;
	}
	for(p=n-1;p>=0;p--)
	{
		for(q=n-1;q>=0;q--)
		{
			if(a[p][q]==0)
			{
				p2=p;
				q2=q;
				break;
				
			}
			if(p2!=0)
				break;
			
		}
		if(p2!=0)
				break;
	}
	int x;
	x=(p2-p1-1)*(q2-q1-1);
	printf("%d",x);
	return 0;
}