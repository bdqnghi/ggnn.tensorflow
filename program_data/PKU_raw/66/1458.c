char week[7][5]={"Sun.","Mon.","Tue.","Wed.","Thu.","Fri.","Sat."};
int y1(int);
int d2(int,int,int);
int check(int);

int main()
{   
	int year,month,day;
	int sum=0;
	cin>>year>>month>>day;


	sum=sum+y1(year-1);
	sum=sum+d2(year,month,day);
	cout<<week[sum%7]<<endl;

	return 0;
}
int y1(int year)
{   
	int a=0;
	while(year>=400)
	{
		a=(a+97*2+400-97)%7;
		year=year-400;
	}


	while(year>=100)
	{
		a=(a+24*2+100-24)%7;
		year=year-100;
	}

	while(year>=1)
	{
		if(year%4==0)
			a=a+2;
		else
			a++;
		year--;
	}

	return a%7 ;
}
int check(int a)
{
	if(((a%4==0)&&(a%100!=0))||(a%400==0))
		return 1;
	else
		return 0;
}
int d2(int year,int m,int d)
{   
	int a[2][12]={{31,28,31,30,31,30,31,31,30,31,30,31},{31,29,31,30,31,30,31,31,30,31,30,31}};
	int count=0;
	if(m==1)
		return d%7;
	else
	     {
			 while(m>1)
	         {
		          count=(count+a[check(year)][m-2])%7;
		          m--;
	         }
			 count=count+d;
			 return count;
	    }
}