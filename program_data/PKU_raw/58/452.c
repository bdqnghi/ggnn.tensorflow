int main(){
	int n,i;
	char a[100];//a?????
	cin>>n;//n??????
	cin.getline(a,100);
	for(;n>0;n--){
		cin.getline(a,100);
		for(i=0;a[i]!=0;i++){
			if(i==0)
				if(a[i]!='_'&&(a[i]<'a'||a[i]>'z')&&(a[i]<'A'||a[i]>'Z'))break;
				else continue;
			else if(a[i]!='_'&&(a[i]<'a'||a[i]>'z')
					&&(a[i]<'A'||a[i]>'Z')&&(a[i]<'0'||a[i]>'9'))break;//???????????
		}
		if(a[i]==0)cout<<'1'<<endl;
		else cout<<'0'<<endl;
	}
	return 0;
}