int main(){
	char a[501];
    cin.getline(a,501);
    int i,j;
    int k;
    int p;
    int s;
    int count=0;
    int len;
    len=strlen(a);
    for(i=0;i<len-1;i++){
    	if(a[i]==a[i+1]){cout<<a[i]<<a[i+1]<<endl;}
    }
    for(i=3;i<=len;i++)
    	for(j=0;j<len;j++){
    		if(i%2==1){
    			k=(int)i/2;
    			if(j-k>=0&&j+k<len){
    				for(s=1;s<=k;s++){
    					if(a[j-s]==a[j+s])count++;
    					else break;
    				}
    				if(count==k){
    					for(p=j-k;p<j+k;p++)
    						cout<<a[p];
    					cout<<a[j+k]<<endl;
    				}count=0;
    			}
    		}
    		else if(i%2==0){
    			k=(int)i/2-1;
    			if(j-k>=0&&j+k+1<len){
    				if(a[j]==a[j+1]){
    					for(s=1;s<=k;s++){
    						if(a[j-s]==a[j+1+s])count++;
    						else break;
    					}
    					if(count==k){
    						for(p=j-k;p<j+k+1;p++)
    							cout<<a[p];
    						cout<<a[j+k+1]<<endl;
    					}
    				}count=0;
    			}
    		}
    	}
    return 0;
}