int main()
{
	int i,year[2],month[2],day[2],days=0;
	for(i=0;i<2;i++)
		cin>>year[i]>>month[i]>>day[i];

	days+=(year[1]-year[0]-1)*365;         //????
	for(i=year[0];i<year[1];i++)
		if((i%4==0&&i%100!=0)||(i%400==0))
			days++;             //????1 **

		int dayofmon[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
                                                 //??????
		for(i=month[0];i<=12;i++)          //???
			days+=dayofmon[i];
		days-=day[0];                //??????day[0]?
		if(((year[0]%4==0&&year[0]%100!=0)||(year[0]%400==0))&&month[0]>2)                                     //????????2?29??????
			days--;        //?**????????

		for(i=1;i<month[1];i++)           //???
			days+=dayofmon[i];
		days+=day[1];
		if(((year[1]%4==0&&year[1]%100!=0)||(year[1]%400==0))&&month[1]>2)                                   //????2?29?????
			days++;      //?1
		
		cout<<days;
		return 0;
}
