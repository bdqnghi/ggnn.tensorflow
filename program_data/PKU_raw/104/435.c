int c(int , int);
int main(void){
	int a,b;
	cin>>a>>b;
	cout<<c(a,b)<<endl;
	return 0;
}
int c(int x, int y){
	if(x%y==0) return y;
	if(x>y) return c(x/2,y);
	if(x<y) return c(x,y/2);
}