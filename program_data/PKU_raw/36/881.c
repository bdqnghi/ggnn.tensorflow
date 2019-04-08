int main(){
	char a[100];
	char b[100];
	cin>>a;
	cin>>b;
	int t=0;
	int l,l1;
	int e=0;
	int m,n;
	l=strlen(a);
	l1=strlen(a);
	if(strlen(a)!=strlen(b)){
		cout<<"NO"<<endl;
		return 0;
	}
    int i=0,j=0;
    while(t!=l1){
    	for(i=0;i<l;i++){
    		for(j=0;j<l;j++){
    			if(a[i]==b[j]){
    				e=1;
    				break;
    			}
    		}
    		if(e==1)break;
    	}
    	if(e==1){
    	for(m=i;m<l;m++){
    		a[m]=a[m+1];
    	}
    	for(n=j;n<l;n++){
    		b[n]=b[n+1];
    	}l--;}
    	t++;
    	e=0;
    }
    if(l==0)cout<<"YES"<<endl;
    else if(l!=0)cout<<"NO"<<endl;
    return 0;
}