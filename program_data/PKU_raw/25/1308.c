/**  
* @file   ??2?N??    .cpp  
* @author ???
* @date   2013-11-16  
* @description 
*          ??????: ??2?N??  
*/ 


int main()
{
	int N;
	double a[500]={0};
	cin>>N;
	a[0]=1;
	for(int i=1;i<=N;i++)
	{
		for(int j=0;;j++)
		{
			if(a[j]==0&&a[j+1]==0&&a[j+2]==0)
				break;
			a[j]=a[j]*2;
			if(a[j]>=10)
			{
				a[j]=a[j]-10;
				a[j+1]=a[j+1]+0.5;
			}
		}
	}
	for(int i=499;i>=0;i--)
	{
		if(a[i]!=0)
		{
			for(int j=i;j>=0;j--)
				cout<<a[j];
			break;
		}
	}
	return 0;
}