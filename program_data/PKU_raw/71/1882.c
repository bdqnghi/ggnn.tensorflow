
int daytable[][12]={{31,28,31,30,31,30,31,31,30,31,30,31},
{31,29,31,30,31,30,31,31,30,31,30,31}};

int daynum(int year,int month,int day){   /*??????????*/
	int leap,i,day1;
	day1=day;
    if(year%4!=0)
		leap=0;
	else if(year%100==0 && year%400!=0||year%3200==0)
		      leap=0;
	     else 
			 leap=1;                 /*???????*/
	for(i=0;i<month-1;i++)
		day1+=daytable[leap][i];
	return day1;
}
int main()
{
	int i,k,n,y,m1,m2;
	cin>>n;
    for(i=0;i<n;i++){
		cin>>y>>m1>>m2;
		k=daynum(y,m1,1)-daynum(y,m2,1);
		k=abs(k);
		if(k%7==0)
			cout<<"YES"<<endl;
		else
		    cout<<"NO"<<endl;
	}
	return 0;
}