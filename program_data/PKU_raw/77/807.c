char set[100];
void getBoy(int i,char b,char g){
	if(set[i]=='\0')return;
	while(set[i]!='\0' && set[i]!=g)++i;
	int j=i-1;
	while(j>=0 && set[j]!=b)--j;
	cout<<j<<" "<<i<<endl;
	set[i]=0;set[j]=0;
	getBoy(i+1,b,g);
}
int main(){
	cin>>set;
	char b,g;
	b = set[0];
	g = set[strlen(set)-1];
	getBoy(0,b,g);
	return 0;
}