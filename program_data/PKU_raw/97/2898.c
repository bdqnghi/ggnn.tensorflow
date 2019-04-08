int main(){
	int x,a[6]={100,50,20,10,5,1},b[6];//???????b[i]?????? 
	cin>>x;
	for(int i=0;i<6;i++){
		b[i]=(x-x%a[i])/a[i];
		x=x-a[i]*b[i];
		cout<<b[i]<<endl;//??b[i]??? 
		}
		
		return 0;
	} 
