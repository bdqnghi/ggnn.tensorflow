
int main(){
	int m,i,j,k,c,g;
    char a[550];
    cin>>a;
    c=strlen(a);
    for(i=2;i<=c;i++){
    	for(j=0;j<c-i+1;j++){
    		g=0;
    		if(a[j]==a[j+i-1]){
    			if(i==2)cout<<a[j]<<a[j+i-1]<<endl;
    			else if(i%2==0&&i!=2){
    				for(k=1;k<=(i-2)/2;k++){
    				if(a[j+k]==a[j+i-1-k])
    					g++;
    				}
    				if(g==k-1){
    					for(m=j;m<j+i-1;m++)
    						cout<<a[m];
    					cout<<a[m]<<endl;
    				}
    			}
    			if(i==3)cout<<a[j]<<a[j+1]<<a[j+2]<<endl;
    			else if(i%2!=0){
    				for(k=1;k<(i-1)/2;k++){
    					if(a[j+k]==a[j+i-1-k])g++;
    				}
    				if(g==k-1){
    					for(m=j;m<j+i-1;m++)
    						cout<<a[m];
    					cout<<a[m]<<endl;
    				}
    			}
    		}
    	}
    }
	return 0;
}