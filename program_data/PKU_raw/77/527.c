void pipei(char a[]){
	int i,j,p=0;
	char q=a[0];
	int len=strlen(a);
	for(i=p;i<len;i++)
		if(a[i]!=q&&a[i]!='+') {
			p=i;
			break;
		}
	if(i==len) return;
	for(j=i-1;j>=0;j--)
		if(a[j]==q) break;
	cout<<j<<' '<<i<<endl;
	a[j]=a[i]='+';
	pipei(a);
}
int main(){
	char a[100];
	cin>>a;
	pipei(a);
}
