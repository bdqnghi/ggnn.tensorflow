int main(){
	int l,i,t=0;
	char a[40];
	cin.getline(a,31);
	l=strlen(a);
	while(1){
	for(i=t;i<l;i++){
	if(a[i]>='0'&&a[i]<='9')
	cout<<a[i];
	else break;
	}
	if(i>l-1) break;
	cout<<endl;
	while(i<l){
		if(a[i]<='9'&&a[i]>='0')
			break;

			i++;
	}
	t=i;

	if(i>l-1) break;
	}
}

