char a[200]={'\0'};
int  b[200]={0},c[200]={0},r[200]={0},q[200]={0};
int len;int lenofr=0;int x=0,y=0;
void devide1(int n)
{
	int i,j;
	
	x=10*y+r[n];
	if(n!=0)cout<<x/13;
	y=x%13;

}
void devide2(int n)
{
	int i,j;
	
	x=10*y+r[n];
	if(n!=0&&n!=1)cout<<x/13;
	y=x%13;

}
int main()
{
	cin>>a;
	len=strlen(a);
	int i,j;
	for(i=0;i<len;i++)
		r[i]=a[i]-'0';

	//cout<<r[0]<<r[1]<<endl;
	if(len==1){cout<<0<<endl;cout<<r[0]<<endl;}
	if(len==2){cout<<(10*r[0]+r[1])/13<<endl;cout<<(10*r[0]+r[1])%13<<endl;}
	if(len>=3){
		if((10*r[0]+r[1])>=13){lenofr=len-1;{for(i=0;i<=lenofr;i++)
			devide1(i);
		cout<<endl;
		cout<<y<<endl;}}
		else {lenofr=len-2;{for(i=0;i<=lenofr+1;i++)
			devide2(i);
		cout<<endl;
		cout<<y<<endl;
		}}
		//cout<<lenofr;
		
	}
	
	
		return 0;
}