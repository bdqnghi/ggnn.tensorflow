int main(){
	char a[101],b[101];
	while(true){
	cin.getline(a,101);
	if(a[0]==0)break;
	cout<<a<<endl;
	int i,j=0,k,l,d;
	for(i=0;i<strlen(a);i++)b[i]=' ';b[i]=0;
	for(i=0;i<strlen(a);i++){
		if(j==0&&a[i]==')')b[i]='?';
		else if(a[i]==')'){
			j--;
			for(k=i;k>=0;k--){
				if(b[k]=='$'){b[k]=' ';break;}
			}
		}
		else if(a[i]=='('){j++;b[i]='$';}
	}
	for(d=0;d<strlen(a);d++)
		if(b[d]!=' ')break;
	for(i=0;i<strlen(a);i++)b[i]=b[i+d];
	for(l=(strlen(a)-1-d);l>=0;l--)
		if(b[l]!=' ')break;
	    b[l+1]=0;
		cout<<b<<endl;
	}
	return 0;
}