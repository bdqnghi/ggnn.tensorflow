char m[100],boy,girl;
int len;
void C();
int findgirl(int);
int main(){
	int i=0;
	cin>>m;
	boy=m[0];
	while(m[i]!='\0'){
		if(m[i]!=boy){
			girl=m[i];
			break;
		}
		else
			i++;
	}
	len=strlen(m);
	for(i=0;i<len/2;i++)
		C();
	return 0;
}
void C(){
	int i,g;
	for(i=0;i<len;i++){
		if(m[i]==boy){
			g=findgirl(i);
			if(g!=0){
				cout<<i<<" "<<g<<endl;
				m[i]='`';m[g]='`';
				break;
			}
		}
	}
}
int findgirl(int i){
	int a;
	if(m[i+1]=='`'){
		a=findgirl(i+1);
		return a;
	}
	else if(m[i+1]==girl)
		return i+1;
	else
		return 0;
}