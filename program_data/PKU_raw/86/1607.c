//????

 


int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int failure,times[21],time,number;            //????????????????????
		cin>>failure;
		if(failure==0)                                     
			number=60;
		else
		{
		    for(int j=0;j<failure;j++)
				cin>>times[j];
		    for(int j=0;j<failure&&times[j]+3*j<60;j++)      //??times[j]+3*j<60??????????
		        { 
					if(times[j]+3*(j+1)<60)                  //times[j]+3*(j+1)<60,??????????????
			           number=times[j]+60-(times[j]+3*(j+1));	
					else number=times[j];
		         }
		}
		 cout<<number<<endl;
	 }

	return 0;
}