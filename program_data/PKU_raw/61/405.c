int main()
{
	int n=0,a=0,x=1,y=1,m=0,i=0;
	cin>>n;
	for(int j=0;j<n;j++){
		cin>>a;
		x=1;y=1;
		if((a==1)||(a==2))cout<<1<<endl;
		if(a>2){
			for(i=1;i<=(a-2);i++){
				m=x+y;
				x=y;
				y=m;
			}
			cout<<m<<endl;
		}
	}
	return 0;
}