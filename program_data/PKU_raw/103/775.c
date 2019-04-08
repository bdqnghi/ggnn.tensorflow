int main(){
	char a[1005]={'\0'};
	int b[1005]={0},num=1;
	cin>>a;
	for(int i=0;i<strlen(a)-1;i++){
		if(a[i]-'a'>=0 && a[i]-'z'<=0)a[i]=a[i]+'A'-'a';
		if(a[i]!=a[i+1] && a[i]-a[i+1]!='A'-'a' && a[i]-a[i+1]!='a'-'A'){
			b[num]=i+1;
			num++;
			}
		}//????,????b 
		if(a[strlen(a)-1]-'a'>=0 && a[strlen(a)-1]-'z'<=0)a[strlen(a)-1]=a[strlen(a)-1]+'A'-'a';
		b[num]=strlen(a);
		for(int i=1;i<=num;i++){
			cout<<"("<<a[b[i-1]]<<","<<b[i]-b[i-1]<<")";
			}//?? 
			
			return 0;
	}
