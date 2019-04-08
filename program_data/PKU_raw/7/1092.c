int main(){
	int i,j,c,k=1;
	char s[300],w[300],t[300];
	scanf("%s",w);
	scanf("%s",s);
	scanf("%s",t);
	int l1=strlen(s);int l2=strlen(w);int l3=strlen(t);
	for(i=0;i<l2;i++){
		c=0;
		for(j=0;j<l1;j++){
			if(!(s[j]==w[j+i])){c=1;break;}
		}
		if((!c)&&(k)){
			for(j=i;j<i+l3;j++){w[j]=t[j-i];}
			k=0;
		}
	}
	printf("%s",w);
	//scanf("%d",&i);
	return 0;
}