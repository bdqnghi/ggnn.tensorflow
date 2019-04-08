
int main(){
	int i,j,m=0,c;
	char a[40];
	cin.getline(a,31);
	c=strlen(a);
	for(i=0;i<c;i++){
		if(a[i]>='0'&&a[i]<='9'&&!(a[i+1]>='0'&&a[i+1]<='9')){
			for(j=m;j<=i-1;j++){
				if(a[j]>='0'&&a[j]<='9')cout<<a[j];
			}
			cout<<a[j]<<endl;
			m=i+1;
		}
		}
	return 0;
}
