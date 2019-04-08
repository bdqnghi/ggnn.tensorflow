
int main(){
	int i=1,j,k,g,n,c,d,q=0;
	int a[100000],b[100000];
	cin>>n;
	while(1){
		cin>>a[i]>>b[i];
		if(a[i]==0&&b[i]==0)break;
		i++;
	}
	for(k=0;k<n;k++){g=0;
	    d=0;
		for(j=1;j<i;j++){
			if(b[j]==k)g++;
		}
		if(g==n-1){
			for(c=1;c<i;c++){
				if(a[c]!=k)d++;
			}
			if(d==i-1){cout<<k<<endl;
			q++;
			break;
			}
		}
	}
	if(q==0)cout<<"NOT FOUND"<<endl;
	return 0;
}
