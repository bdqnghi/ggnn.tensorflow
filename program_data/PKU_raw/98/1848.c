int main(){
	int g,cco=0;
	cin>>g;
	char b[45];
	cin>>b;
	cout<<b;
	cco=strlen(b);
	for(int i=1;i<g;i++){
		char a[45];
		char *p=a;
		cin>>a;
		cco+=strlen(a);
		if(cco<80){
			cout<<" "<<p;
			cco++;
		}
		else{
			cco=0;
			cout<<endl<<p;
			cco+=strlen(a);
		}
	}
return 0;
}
