//**************************************
//     ??????3,5,7,????      *
//     ??????                    *
//     ???????????3,5,7?? *
//     ?????2012.10               *
//**************************************
int main()                                        //?????
{
	int m,sum;                                   
	cin>>m;
	sum=(m%3==0)+(m%5==0)+(m%7==0);    
	if(sum==3)
		cout<<"3 "<<"5 "<<"7"<<endl;
	else
	{
		if(sum==2)
		{
			if(m%3!=0)
				cout<<"5 "<<"7"<<endl;
			else
			{
				if(m%5!=0)
				cout<<"3 "<<"7"<<endl;
				else
				cout<<"3 "<<"5"<<endl;
			}
		}
		else
		{
			if(sum==1)
		{
			if(m%3==0)
				cout<<"3"<<endl;
			else
			{
				if(m%5==0)
				cout<<"5"<<endl;
				else
				cout<<"7"<<endl;
			}
		}
			else
				cout<<"n"<<endl;
		}
	}
	return 0;
}