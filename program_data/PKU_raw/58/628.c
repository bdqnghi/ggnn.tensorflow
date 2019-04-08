int main(){
	int n,i,j;
	char a[81];
	cin>>n;
	cin.getline(a,81);
	for(i=0;i<n;i++){
		cin.getline(a,81);
		if(((a[0]!='_')+(a[0]>'Z'||(a[0]<'A'))+(a[0]>'z'||a[0]<'a'))==3)cout<<'0'<<endl;
		else{
			for(j=0;j<strlen(a);j++)
				if(((a[j]!='_')+(a[j]>'9'||a[j]<'0')+(a[j]>'Z'||(a[j]<'A'))+(a[j]>'z'||a[j]<'a'))==4){cout<<'0'<<endl;break;}
			if(j==strlen(a))cout<<'1'<<endl;
		}
	}
	return 0;
}
