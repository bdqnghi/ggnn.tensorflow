
char ls[MAX];
int pafind(int start,int len);


int main(){
	int len;
	cin>>ls;
	len=strlen(ls);
	for(int ll=2;ll<=len;ll++){
		for(int i=0;i<=len-ll;i++){
			if(pafind(i,ll)){
				for(int j=i;j<i+ll;j++) cout<<ls[j];
				cout<<endl;
			}
		}
	}
	return 0;
}
int pafind(int start,int len){
	int maxl=len/2,ok=1;
	for(int i=start;i<start+maxl;i++){
		if(ls[i]!=ls[start+len-1-(i-start)]){
 			ok=0;
			break;
		}
	}
	return ok;
}