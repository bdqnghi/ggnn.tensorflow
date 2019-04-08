int main()
{
	int year,month,day;
	int total=0;
	cin>>year>>month>>day;
	if ((year%4==0&&year%100!=0)||(year%400==0))//???
	{
	  int a[13]={31,29,31,30,31,30,31,31,30,31,30,31};
	  for(int i=1;i<=month-1;i++)
	  {
  		 total=total+a[i-1];
  	  }
  	  total=total+day;
  	
	} 
	else
	{
		 int b[13]={31,28,31,30,31,30,31,31,30,31,30,31};
		 for(int j=1;j<=month-1;j++)
	  {
  		 total=total+b[j-1];
  	  }
  	  total=total+day;
	}
	cout<<total<<endl;
	
	return 0;
} 