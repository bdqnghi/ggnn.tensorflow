int main(){
	char a[1000],c[1000];
    int b[1000];
    cin>>a;
    int len,i,j;
    for(i=0;i<1000;i++)
    	b[i]=1;
    len=strlen(a);
    for(i=0;i<len;i++)
    	if(a[i]>='a'&&a[i]<='z')
    		a[i]=a[i]-32;
    a[len]=1;
    len=len+1;
    	for(i=0,j=0;i<len;i++){
    		if(a[i]==a[i+1]){
    			c[j]=a[i];
    			b[j]++;
    		}
    		else {
    		c[j]=a[i];
    		j++;
    		}
    	}
    for(i=0;i<j-1;i++)
    	cout<<"("<<c[i]<<","<<b[i]<<")";
    cout<<endl;
	return 0;
}