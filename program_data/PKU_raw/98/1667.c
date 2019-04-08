int main (){
	int n,t=0;
		cin>>n;
		char word[n][41];
		char *p[n];//????????,?????
		for(int i=0;i<n;i++){
			cin>>word[i];
			p[i]=word[i];
		}
		for(int i=0;i<n;i++){
			t+=strlen(word[i])+1;
		    if(t+strlen(word[i+1])<=80){
		    	if(i==n-1){
		    		cout<<p[i];
		    	    break;
		    	}
		    	cout<<p[i]<<" ";
		    }
		    if(t+strlen(word[i+1])>80){
		    	cout<<p[i]<<endl;
		    	t=0;
		    }
		}

	return 0;
}
