int main(){
	char g[100];
	char r[100];
	gets(g);
	int y=0;
	int d=strlen(g);
	for(int i=0;i<d;i++){
		if(g[i]!=32){
			r[y]=g[i];
			y++;
		}else if(g[i+1]!=32){
			r[y]=g[i];
			y++;
		}
	}
	for(int m=0;m<(y);m++){
		printf("%c",r[m]);
	}

			
	return 0;
}