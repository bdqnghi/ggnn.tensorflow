int main(){
	int n,i,charnum=0;
	cin>>n;
	char a[n][100];
	for(i=0;i<n;i++)
	cin>>*(a+i);
    for(i=0;i<n;i++){
       charnum+=strlen(*(a+i))+1;
       if(charnum+strlen(*(a+i+1))>80 && charnum<=81)
    	   cout<<*(a+i);
       if(charnum+strlen(*(a+i+1))<=80&&i!=n-1)
           cout<<*(a+i)<<" ";
       if(charnum+strlen(*(a+i+1))<=80&&i==n-1)
                  cout<<*(a+i);
       if(charnum>81){
    	       cout<<endl;
    	       cout<<*(a+i)<<" ";
    	       charnum=strlen(*(a+i))+1;
       }
    }
	return 0;
}