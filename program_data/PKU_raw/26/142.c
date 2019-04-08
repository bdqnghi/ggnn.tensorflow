int main(){
	char a[101];
	cin.getline(a,101);
	int b=strlen(a),j;
	for(int i=0;i<b;i++){
		if(a[i]==' ')
		if(a[i+1]==' '){
			for(j=i+1;j<b;j++)
				a[j]=a[j+1];
			i--;
		}
	}
	cout<<a<<endl;
	return 0;
}