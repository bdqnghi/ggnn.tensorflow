int main()                                            //?????
{
	int n;                                            //????n
	cin>>n;                                           //????n
	int a[100];                                       //????a
	for(int i = 0 ; i < n ; i++)                      //????a
	{
		cin>>a[i];                                    
	}
	for(int j = n-1 ; j >= 0 ; j--)                   //??????a
	{
		if(j!=0)
		cout<<a[j]<<" ";
		if(j==0)
		cout<<a[j]<<endl;
	}
	return 0;                                         //???????????????????
}





		

