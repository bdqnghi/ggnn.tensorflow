
int main()
{   
     int n,year[200],m1[200],m2[200],i,j,t,a;
     int run[]={0,31,29,31,30,31,30,31,31,30,31,30,31},feirun[]={0,31,28,31,30,31,30,31,31,30,31,30,31};   //??????????????
      cin>>n;
      for(i=0;i<200;i++)
	{
              cin>>year[i]>>m1[i]>>m2[i];
	 if(m1[i]<m2[i])
	{
	  t=m1[i];
             m1[i]=m2[i];
	  m2[i]=t;
	}                                   //?m1[i]??????
     if((year[i]%4==0)&&(year[i]%100!=0)||(year[i]%400==0))    //???????
	{   
	    a=0;
	    for(j=m2[i];j<m1[i];j++)
	    a=a+run[j];                                       //???????
		if(a%7==0)                             //??????????
			cout<<"YES"<<endl;
		else
		         cout<<"NO"<<endl;
	}
   else
				{                                                        //?????
		a=0;
		for(j=m2[i];j<m1[i];j++)
		       a=a+feirun[j];
		if(a%7==0)
		cout<<"YES"<<endl;
	         else
		cout<<"NO"<<endl;
			}
	}
	return 0;
}