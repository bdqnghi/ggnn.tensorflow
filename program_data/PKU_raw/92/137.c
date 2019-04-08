
int MyCompare(const void* a,const void* b)
{
	return (*(int *)b-*(int *)a);
}
int main()
{
	int i,j,p,q,n;
	int result;
	int speed1[1000],speed2[1000];

	while(cin>>n)
	{	
		if(n==0) break;
		result=0;
		for(i=0;i<n;i++)
			cin>>speed1[i];
		for(i=0;i<n;i++)
			cin>>speed2[i];
		qsort(speed1,n,sizeof(int),MyCompare);
		qsort(speed2,n,sizeof(int),MyCompare);
		/*for(i=0;i<n;i++)
			cout<<speed1[i];
		for(i=0;i<n;i++)
			cout<<speed2[i];*/
		i=p=0;
		j=q=n-1;
		while(i<=j)
		{
			if(speed1[i]>speed2[p])
			{
				result += 200;
				i++;
				p++;
			}
			else if(speed1[j]>speed2[q])
			{
				result += 200;
				j--;
				q--;
			}
			else if(speed1[j]==speed2[p])
			{
				j--;
				p++;
			}
			else
			{
				result -= 200;
				j--;
				p++;
			}
		}
		cout<<result<<endl;
	}
	return 0;
}