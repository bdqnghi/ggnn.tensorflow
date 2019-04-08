int main(){
    int n,i,j,p,q,k;
    cin>>n;
    int a[100000][2];
    for(i=0;;i++){
    	for(j=0;j<2;j++)
    		cin>>a[i][j];
        if(a[i][0]+a[i][1]==0)
            break;}  //??????
    int b[100000];
    for(p=0;p<i;p++)
    	    for(q=0;q<n;q++){
    	    	if(a[p][1]==q)
    	    		b[q]++;  //??????
    	    }
    k=0;
    for(q=0;q<n;q++)
    	if(b[q]==n-1){
    		cout<<q<<endl;
    		k=1;
    		break;
    	}
    if(k==0)
    	cout<<"NOT FOUND"<<endl;
    return 0;
}