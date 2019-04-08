int m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int is_year(int x)
{

	if(x%4!=0)
	   return 0;
      else if((x%4==0)&&(x%100!=0))
		return 1;
      else
    	  if(x%400==0)
    		  return 1;
    	  else return 0;
}
int main()
{
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  {
	  int year,month1,month2,day1=1,day2=1;
      cin>>year>>month1>>month2;
      if(is_year(year))
    	  m[2]=29;
      for(int i=1;i<month1;i++)
    	  day1+=m[i];
      for(int i=1;i<month2;i++)
    	  day2+=m[i];
      m[2]=28;
      if((abs(day2-day1))%7==0)
    	  cout<<"YES"<<endl;
      else
    	  cout<<"NO"<<endl;




  }

return 0;
}
