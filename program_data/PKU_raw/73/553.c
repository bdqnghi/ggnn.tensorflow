/**  
* @file   ???? .cpp  
* @author ??? 
* @date   2013-11-01  * @description 
*          ??????:????   */ 
int main()
{
	int a[5][5];
	int number;
	int t=0 ;
	for(int i=0;i<5;i++)
	{
		for (int j=0;j<5;j++)
		{
			cin>>number;
			a[i][j]=number;
		}
	}
	int max=INT_MIN,maxi,maxj;
	for(int i=0;i<5;i++)
	{
		max=INT_MIN;
		for(int j=0;j<5;j++)
		{
			if (a[i][j]>max)
			{
				max=a[i][j];
				maxi=i;
				maxj=j;
			}
		}
		int k=0 ;
		for(;k<5;k++)
		{
			if(a[k][maxj]<max)
				break;
		}
		if(k==5)
		{
			cout<<(maxi+1)<<" "<<(maxj+1)<<" "<<max;
			t++;
		}
	}
	if(t==0)
		cout<<"not found"<<endl;
	return 0;
}


		

