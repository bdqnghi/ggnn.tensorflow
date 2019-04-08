
int main()
{
	int n;
	int i,j;
	int year,m1,m2;
	int length1=0,length2=0;
	int length;
	int A[]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	int B[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	cin>>n;
	for(i=0;i<n;i++)
	{
        length1=0;length2=0;
		cin>>year>>m1>>m2;
		
	if(year%4==0&&year%100!=0||year%400==0)
	{
		for(j=1;j<m1;j++)
			length1=A[j]+length1;
		for(j=1;j<m2;j++)
            length2=A[j]+length2;
		length=abs(length1-length2);
	}
	else
	{
		for(j=1;j<m1;j++)
			length1=B[j]+length1;
		for(j=1;j<m2;j++)
            length2=B[j]+length2;
		length=abs(length1-length2);
	}
	if(length%7==0)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	}
	
	return 0;
}
