
int kiss(char ch[], char b, char g, int l, int i){
	int boy;
	int j;
	if(ch[i]!=g) boy=-1;
	else{
		for(j=i-1; j>=0; j--){
			if(ch[j]==b){
				boy=j;
				ch[i]='\0';
				ch[j]='\0';
				break;
			}
			else;
		}
	}
	return(boy);
}



main(){
	char ch[5000], b, g;
	int i, l, girl, boy;
	scanf("%s", ch);
	l=strlen(ch);
	b=ch[0];
	for(i=1; i<l; i++){
		if(ch[i]!=b){
			g=ch[i];
			break;
		}
		else;
	}
	for(i=1; i<l; i++){
		boy=kiss(ch, b, g, l, i);
		if(boy==-1) continue;
		else{
			girl=i;
			printf("%d %d\n", boy, girl);
		}
	}
}