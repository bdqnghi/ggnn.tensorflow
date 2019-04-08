int  check(int n)
{
	if ((n%4!=0)||(n%100==0&&n%400!=0))
		return 1;
	else return 2;
}
int main()
{

	int a[12]={3,3,6,8,11,13,16,19,21,24,26,29};
	int b[12]={3,4,7,9,12,14,17,20,22,25,27,30};

int y,m,d;
int i;
int x;
int sum=0;
cin>>y>>m>>d;
if (y==1)
{
	if (m==1)
		sum=d;
	else{
		sum=a[m-2]+d;

	}

}
if (y!=1){

	x=(y-1)/4-(y-1)/100+(y-1)/400;
	sum=sum+2*x+(y-1-x);
	if (m==1) sum=sum+d;
	if (m!=1){
	if (check(y)==1)
	{
		sum=sum+a[m-2]+d;
	}
	if (check(y)==2)
		{sum=sum+b[m-2]+d;}

}}

if (sum%7==0)  cout<<"Sun."<<endl;
if (sum%7==1)  cout<<"Mon."<<endl;
if (sum%7==2)  cout<<"Tue."<<endl;
if (sum%7==3)  cout<<"Wed."<<endl;
if (sum%7==4)  cout<<"Thu."<<endl;
if (sum%7==5)  cout<<"Fri."<<endl;
if (sum%7==6)  cout<<"Sat."<<endl;

	return 0;
}
