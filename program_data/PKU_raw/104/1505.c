
int a[11],b[11],num1=1,num2=1;
void f1(int x){
	a[1]=x;
	if(x!=1){
		do{
			num1++;
			a[num1]=x/2;
			x=a[num1];
		}while(a[num1]!=1);
		a[num1]=1;
	}
}
void f2(int y){
	b[1]=y;
	if(y!=1){
		do{
			num2++;
			b[num2]=y/2;
			y=b[num2];
		}while(b[num2]!=1);
		b[num2]=1;
	}
}
int main(){
	int x,y,p=0;
	cin>>x>>y;
	f1(x);
	f2(y);
	for(int i=1;i<=num1;i++){
		for(int j=1;j<=num2;j++){
			if(a[i]==b[j]){
				cout<<a[i]<<endl;
				p++;
				break;
			}
		}
		if(p!=0)
			break;
	}
	return 0;
} 