int main(){
	int m,y,n,l;
	char a[100],b[100];
	int aa[100],bb[100],c[100];
	cin>>y;
	for(int i=1;i<=y;i++){
		cin>>a;
		cin>>b;
		for(int r=0;r<100;r++){
			aa[r]=0;bb[r]=0;c[r]=0;
		}
        m=strlen(a);
        n=strlen(b);
        for(int i=0;i<m;i++)
        	aa[m-1-i]=a[i]-'0';
        for(int j=0;j<n;j++)
        	bb[n-1-j]=b[j]-'0';
        int carry=0;
        for(int k=0;k<m;k++){
        	c[k]=carry+aa[k]-bb[k];
        	if(c[k]<0){
        		c[k]+=10;
        		carry=-1;
        	}
        	else
        		carry=0;
        }
        for(l=m-1;l>=0;l--)
        	if(c[l]!=0)break;
        if(l==-1)cout<<"0"<<endl;
        else{
        	for(int x=l;x>=0;x--)
        		cout<<c[x];
            cout<<endl;
        }
}
	return 0;
}
