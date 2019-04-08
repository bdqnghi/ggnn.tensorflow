int main(){
	char a[31];
	cin.getline(a,31);
	for(int i=0;i<strlen(a);i++)
		if (a[i]<='9'&& a[i]>='0')
			if (a[i+1]>'9'||a[i+1]<'0')
				cout<<a[i]<<endl;
			else cout<<a[i];
	return 0;
}
