

int main()
{
	int x,n,m1,m2,d,i,j,counter,counter1=0,counter2=0,month1[12]={31,28,31,30,31,30,31,31,30,31,30,31},month2[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	cin>>x;
	for(j=0;j<x;j++)
	{
	counter=0;counter1=0;counter2=0;
	cin>>n>>m1>>m2;
	if((n%4==0&&n%100!=0)||(n%400==0))
	{
		for(i=0;i<m1-1;i++)
			counter1+=month2[i];
		counter1+=1;
	}
	else 
	{
		for(i=0;i<m1-1;i++)
			counter1+=month1[i];
		counter1+=1;
	}
	if((n%4==0&&n%100!=0)||(n%400==0))
	{
		for(i=0;i<m2-1;i++)
			counter2+=month2[i];
		counter2+=1;
	}
	else 
	{
		for(i=0;i<m2-1;i++)
			counter2+=month1[i];
		counter2+=1;
	}
	if(counter1>counter2)
		counter=counter1-counter2;
	else
		counter=counter2-counter1;
	if(counter%7==0)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	}
	return 0;
}
