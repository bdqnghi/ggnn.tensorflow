int main(){
	int n,i,num,t;  //????
	cin>>n;
	char word[1000][40];
	for(i=0;i<n;i++)
	    scanf("%s",word[i]);  //????????
	i=0;
	for(t=0;i<n-1;t++){  //???
		cout<<word[i];  //??????
		for(num=1+strlen(word[i]);i<n-1;){
		    num=num+strlen(word[i+1])+1;
		    if(num<=81){  //??????
		    	cout<<" "<<word[i+1];
		    	i++;}
		    else{
		    	cout<<endl;  //??
		    	i++;
		    	break;}
		}
	}
	return 0;  //????
}