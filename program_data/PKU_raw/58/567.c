
int main(){
    int n,m=1,i,j,c;
    char a[100];
    cin>>n;
    cin.getline(a,95);
    while(m<=n){
    	j=0;
    	cin.getline(a,95);
    	c=strlen(a);
    	if((a[0]>='a'&&a[0]<='z')||(a[0]=='_')||(a[0]>='A'&&a[0]<='Z')){
    		if(c==1)cout<<1<<endl;
    	for(i=1;i<c;i++){
    	if((a[i]>='a'&&a[i]<='z')||(a[i]=='_')||(a[i]>='A'&&a[i]<='Z')||(a[i]>='0'&&a[i]<='9')||a[i]=='_'){
    		j++;
    	}

    	else {
    		cout<<0<<endl;
    		break;
    	}
    	if(j==(c-1))cout<<1<<endl;
    	}
    	}
    	else cout<<0<<endl;

    	m++;
    }
	return 0;
}