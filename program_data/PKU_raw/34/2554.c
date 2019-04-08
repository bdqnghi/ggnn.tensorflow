int f(int n);
int main( )
{
	int n,i;
	cin >>n;
	for(i=0;i<100;i++){
		if(n==1){
			cout <<"End" <<endl;
			break;
		}
		else{
			if(n%2==0){
				cout <<n <<"/2=" <<f(n) <<endl;}
			else{
				cout <<n <<"*3+1=" <<f(n) <<endl;}
			n=f(n);
		}
	}
	return 0;
}

int f(int n)
{
	if(n%2==0) return n/2;
	else return n*3+1;
}