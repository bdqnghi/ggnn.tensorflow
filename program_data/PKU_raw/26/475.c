int main(){
	char a[101];
	cin.getline(a,101);
	int i,j,l;
	l=strlen(a);
	for(i=0;i<l;i++){
		if(a[i]==' '){
			if(a[i+1]==' '){
				for(j=i;j<l;j++){
					a[j]=a[j+1];
				}l--;i--;
			}
		}
	}
	for(j=0;j<l-1;j++)
		cout<<a[j];
	cout<<a[l-1]<<endl;
	return 0;
}