//*********************************************************************
//*????caixiang.cpp                                               *
//*?  ??spica                                                      *
//*?????2011?10?                                               *
//*????:???????????m,?????2??????           *
//*********************************************************************
int main()
{
	int even=0,odd1=0,odd2=0,sum1=0,sum2=0,j=0,k=0;//????even,?????odd1,odd2,??????sum1,sum2???????j,k
	cin>>even;
	for(odd1=3;odd1<=even/2;odd1++)
	{
		sum1=0;
		sum2=0;
		odd2=even-odd1;
		for(j=2;j<odd1;j++)
		{
			if(odd1%j==0)
				sum1=sum1+1;
		}
		for(k=2;k<odd2;k++)
		{
			if(odd2%k==0)
				sum2=sum2+1;
	}
	if(sum1==0&&sum2==0)
		cout<<odd1<<" "<<odd2<<endl;
}
return 0;
}