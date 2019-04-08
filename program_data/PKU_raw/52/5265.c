int main(){
	int m,n,i,j=0,k,t,q[100];
	int *p=q;
	cin>>n>>m;
	for(i=0;i<n;i++){
		cin>>q[i];
	}
	for(i=0;i<m;i++){
	j=0;
	    k=*p;
		while(j<n-1){
			t=*(p+j+1);
			*(p+j+1)=k;
			k=t;
			j++;
		}
		*p=k;
	}
	cout<<*p;
    for(i=1;i<n;i++){
	cout<<" "<<*(p+i);
	}
	return 0;
}