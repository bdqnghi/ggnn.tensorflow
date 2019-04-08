int main(){
	static int a,can[3],flag=0;
	cin>>a;
	if(a%3==0){
		can[0]=1;flag=1;
	}
	if(a%5==0){
		can[1]=1;flag=1;
	}
	if(a%7==0){
		can[2]=1;flag=1;
	}
	if(flag){
		for(int i=2;i>=0;i--)
			if(can[i]){
				can[i]=2;break;
			}
	}
	if(can[0])cout<<3;
	if(can[0]==1)cout<<" ";
	if(can[1])cout<<5;if(can[1]==1)cout<<" ";
	if(can[2])cout<<7;if(can[2]==1)cout<<" ";
	if(flag==0)cout<<"n";
	cout<<endl;
	return 0;
}
