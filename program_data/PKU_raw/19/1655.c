int main (){
	char s[201],a[101],b[101];
	int S,A;
	int i,j,k=0,m=0;
	cin.getline(s,201);S=strlen(s);
	cin.getline(a,101);A=strlen(a);
	cin.getline(b,101);
	while(s[k]!=a[0]){
		cout<<s[k];
		k++;
	}
	for(i=k;i<S;i++){
		if(s[i]==a[0]){
			for(j=i;j<A+i;j++){
					if(s[j]==a[j-i])
						m++;
			}
			if((i==0)&&(m==A)){
				cout<<b;
				i=i+A-1;
			}
			else if((m==A)&&(i!=0)&&(s[i-1]==32)){
				cout<<b;
				i=i+A-1;
			}
			else cout<<s[i];
			m=0;
		}
		else cout<<s[i];
	}
	return 0;
}