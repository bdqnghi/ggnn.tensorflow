int main()
{
	char str[11],substr[4],a[13];
	int i;
	while(cin>>str>>substr){
		char max=str[0];
		for(int i=0;i<10;i++){
			if(str[i]>max) max=str[i];}
		int m=0;
		for(i=0;i<10;i++){
			if(str[i]==max){
				m=i;break;}}
		for(i=0;i<=m;i++)
			a[i]=str[i];
		for(i=0;i<3;i++)
			a[m+1+i]=substr[i];
		for(i=m+1;i<strlen(str);i++)
			a[i+3]=str[i];
		a[strlen(str)+3]='\0';
		for(i=0;i<strlen(a);i++)
			cout<<a[i];
		cout<<endl;}
	return 0;
}

