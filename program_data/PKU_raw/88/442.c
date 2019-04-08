int main(){
	char a[31];
	cin.getline(a,31);
	int len=strlen(a);
	for(int i=0;i<len;i++){
		if('0'<=a[i]&&a[i]<='9') cout<<a[i];
		else{
			cout<<endl;
			for(int j=i;j<len;j++){
				if('0'<=a[i]&&a[i]<='9'){
					cout<<a[j];
					break;
				}
				i++;
			}
		}
	}
	return 0;
}
