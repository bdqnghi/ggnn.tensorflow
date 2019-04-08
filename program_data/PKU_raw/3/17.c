int main(){
    int n,k,i,j,t=0;
	cin>>n>>k;
	int a[n];
	for(i=0;i<n;i++){cin>>a[i];}
    for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]+a[j]==k){cout<<"yes";t++;break;}
                  
		}if(t!=0)break;
}
   if(t==0)cout<<"no";
}
