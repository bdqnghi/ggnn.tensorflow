int main(){
	int n,i,k,a,b,y,w=0;
	char s1[100]={'\0'},s2[100]={'\0'},e;
	scanf("%d%s%d",&a,s1,&b);
	for(i=0;s1[i];i++){
		if(s1[i]<='Z'&&s1[i]>='A'){
			s1[i]=s1[i]-'A'+'a';
		}
	}
	for(i=0;s1[i];i++){
		if(s1[i]<='z'&&s1[i]>='a'){
			w=w*a+s1[i]-'a'+10;
		}else{
			w=w*a+s1[i]-'0';
		}
	}
//	printf("%d\n",w);
	for(i=0;1;i++){
		y=w%b;
		if(y<=9&&y>=0){
			s2[i]=y+'0';
		}else{
			s2[i]=y-10+'A';
		}
		w=w/b;
		if(w==0){
			break;
		}
	}
	w=strlen(s2);
	for(i=0;i<w-i;i++){
		e=s2[i];
		s2[i]=s2[w-i-1];
		s2[w-i-1]=e;
	}
	printf("%s",s2);
//	scanf("%d",&n);
	return 0;
}
