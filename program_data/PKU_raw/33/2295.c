int main(){
	int n,i;
	char base[256];
	scanf("%d",&n);
	while(n!=0){
		scanf("%s",base);
		for(i=0;base[i]!='\0';i++){
			if(base[i]=='A')base[i]='T';
			else if(base[i]=='T')base[i]='A';
			else if(base[i]=='C')base[i]='G';
			else if(base[i]=='G')base[i]='C';
		}
		n--;
		printf("%s\n",base);
	}
	return 0;
}