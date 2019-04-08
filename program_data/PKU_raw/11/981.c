
int main()
{
	int n,m,d,i,j,counter=0,month1[12]={31,28,31,30,31,30,31,31,30,31,30,31},month2[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	cin>>n>>m>>d;
	if((n%4==0&&n%100!=0)||(n%400==0))
	{
		for(i=0;i<m-1;i++)
			counter+=month2[i];
		counter+=d;
		cout<<counter<<endl;
	}
	else 
	{
		for(i=0;i<m-1;i++)
			counter+=month1[i];
		counter+=d;
		cout<<counter<<endl;
	}
	return 0;
}