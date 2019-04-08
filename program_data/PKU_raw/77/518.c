char a[100000000];
int n;
char e,f;
int lala(){
	int i,j;
	if(a[0]=='0')return 0;
	for(i=0;i<n;i++){
		if(a[i]==e){
			for(j=1;j<n-i;j++){
				if(a[i+j]=='0')continue;
				else if(a[i+j]==f){
					a[i]='0';a[i+j]='0';
					cout<<i<<' '<<i+j<<endl;
					return lala();
				}
				else if(a[i+j]==e)break;
			}
		}
	}return 0;
}
int main(){
	cin>>a;
	n=strlen(a);
	for(int i=1;i<n;i++)
		if(a[i]!=a[0]){
			f=a[i];
		}
	e=a[0];
	lala();
	return 0;
}