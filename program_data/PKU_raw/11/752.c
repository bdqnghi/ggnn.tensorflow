int main()
{
	int a,m,day,i,x;
	cin >> a >> m >> day;
	 switch(m)
	 {
	 case 1:i=0;break;
     case 2:i=31;break;
     case 3:i=31+28;break;
     case 4:i=31+28+31;break;
     case 5:i=31+28+31+30;break;
     case 6:i=31+28+31+30+31;break;
     case 7:i=31+28+31+30+31+30;break;
     case 8:i=31+28+31+30+31+30+31;break;
     case 9:i=31+28+31+30+31+30+31+31;break;
     case 10:i=31+28+31+30+31+30+31+31+30;break;
     case 11:i=31+28+31+30+31+30+31+31+30+31;break;
     case 12:i=31+28+31+30+31+30+31+31+30+31+30;break;
	 default:cout << "error" <<endl;
	 }
	 if ( (a%4==0 && a%100!=0) || (a%400==0) )
	 {
		 if ((m!=1)&&(m!=2))
		 x=i+day+1;
		 else
			 x=i+day;
	 }
	 else 
		 x=i+day;
	 cout << x << endl;
	 return 0;
}


