//????????   ???  ??1000012729
//****************************************************************
int main()
{
	int i,j,n,num[20000],judge;           //????num,?????
	                                      //???judge
	cin>>n;
	cout<<endl;
	if(n>0 && n<=20000)                    //??n??0??20000
	{
		for(i=0;i<n;i++)
		{
			judge=0;
			cin>>judge;
			if(judge>=10 && judge<100)     //??????
				                           //????10??100
			{
				num[i]=judge;
			}
		}
		for(i=1;i<n;i++)
		  for(j=0;j<i;j++)
		  {
			  if(num[i]-num[j]==0)        //??????????
				                          //????
				  num[i]=0;               //???????????0
		  }
		  cout<<num[0];
		  for(i=1;i<n;i++)
		{
			if(num[i]!=0)                 //????0??
				cout<<" "<<num[i];
		}
	}	 
	else
	{
		cout<<"error"<<endl;
	}
	return 0;
}

