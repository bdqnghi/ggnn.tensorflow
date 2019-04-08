int main()
 {
	int n=0,year=0,month1=0,month2=0,a=0,day=0,i=0,j=0;//a=1???a=2????day?????????????????
	int b[12]={31,0,31,30,31,30,31,31,30,31,30,31};//??b??????

	cin>>n;
	while(j<n)//???n?
		{
			j++;
		cin>>year;  
	   if(year%100==0)//????????
		   if(year%400==0)a=1;
		   else a=2;
	   else if(year%4==0)a=1;
	        else a=2;	
		
			cin>>month1>>month2;//??????
		if(a==1)//??
		b[1]= 29;
		else//??
		b[1]= 28;
		
		day=0;
		for(i=min(month1,month2);i<=max(month1,month2)-1;i++)
			day=day+b[i-1];
		
		
		if(day%7==0) 
			cout<<"YES"<<endl;
		else 
			cout<<"NO"<<endl;
	}
	return 0;
}