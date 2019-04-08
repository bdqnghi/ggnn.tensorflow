//****************************
//????????
//???2013.12.14
//****************************
int main()
{
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31},year=0,mm=0,dd=0,i=0,j=0;
    long long sum=0;
	char c[7][5]={"Mon.","Tue.","Wed.","Thu.","Fri.","Sat.","Sun."};
	cin>>year>>mm>>dd;
    i=(year-1)/4-((year-1)/100-(year-1)/400);
	sum=sum+i;
    sum+=(long long)(year-1)*365;
	if((year%100==0&&year%400==0)||(year%100!=0&&year%4==0))
		a[1]=29;
	if(mm>1)
	{
	   for(j=0;j<mm-1;j++)
		   sum=sum+a[j];
	}
       sum=sum+dd;
		cout<<c[(sum-1)%7];
	cout<<endl;
	return 0;    
}
