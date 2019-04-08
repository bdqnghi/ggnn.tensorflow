
int main() {
	int a,n,i=1,j=2,o=1,p=1,q=1;		//???a???q
	cin>>n;
	while (i<=n){
		cin>>a;
			while(j<a){
			q=o+p;
			o=p;
			p=q;
			j=j+1;						//????q
		}
		cout<<q<<endl;					//??q
		i=i+1;
		j=2;
		o=1;
		p=1;
		q=1;							//??
	}
	return 0;
}
