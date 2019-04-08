int main()//?????
{
	int m,n,i=0,j=0,k=1;//????
	float sum=0,f,x=2,y=1.0,t;
	cin>>m;//????
	cout<<endl;
	for(i=0;i<m;i++){//????????
		cin>>n;
		for(j=0;j<n;j++){
            f=x/y;
	        sum=sum+f;
		    t=x;
            x=x+y;
	        y=t;
		          }
		cout<<setprecision(3)<<fixed;//??????
		cout<<sum<<endl;//????
	    sum=0;
	    x=2;
	    y=1;}
	return 0;//?????
}