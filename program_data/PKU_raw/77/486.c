char c[1000],b,g;
int l;
void game(){
	for(int i=0;i<l;i++){
		if(c[i]==b){
			for(int j=i+1;j<l;j++){
				if(c[j]==' ')continue;
				else if(c[j]==b){i=j-1;break;}
				else {
					cout<<i<<' '<<j<<endl;
					c[i]=' ';c[j]=' ';
					for(int k=i-1;k>=0;k--){
						if(c[k]==b){
							i=k-1;
							break;
						}
					}
					break;
				}
			}
		}
	}
	if(c[0]!=' ')game();
}
int main(){
	cin>>c;
	l=strlen(c);
	b=c[0];
	for(int i=0;i<l;i++){
		if(c[i]!=b){
			g=c[i];
			break;
		}
	}
	game();
	return 0;
}
