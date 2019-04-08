
int Day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

int sum=0;     
int main()
{
  int year,month,day;
  cin>>year>>month>>day;
 if(year<=2000)
 {for(int i=1;i<=year-1;i++)
  {
	 
	  if(i%400==0||(i%4==0&&i%100!=0)) 
	  {
		  sum+=2;}
	  else sum+=1;
  }
 }
 else 
 {
	 for(int k=1;k<=year%2000-1;k++)
  {
	 
	  if(k%400==0||(k%4==0&&k%100!=0)) 
	  {
		  sum+=2;}
	  else sum+=1;
  }

 }
  if(year%400==0||(year%4==0&&year%100!=0)) Day[2]++;
  for(int j=1;j<=month-1;j++)
  {
	  sum+=Day[j];
  }
  sum+=day-1;
  switch(sum%7)
  {
  case 0: cout<<"Mon."; break;
  case 1: cout<<"Tue."; break;
  case 2: cout<<"Wed."; break;
  case 3: cout<<"Thu."; break;
  case 4: cout<<"Fri."; break;
  case 5: cout<<"Sat."; break;
  case 6: cout<<"Sun."; break;
  default: return 0;
  }
  return 0;
}