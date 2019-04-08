

int main()
{   int i,j,t1,t2,flag,len;
	int b[101],l[101],r[101];
	char s[101];
	while(scanf("%s",s)!=EOF){
		len=strlen(s);
		for(i=0;i<len;i++){
			if(s[i]=='('){
				b[i]=-1;
			}
			else if(s[i]==')'){
				b[i]=1;
			}
			else{
				b[i]=0;
			}
		}
		t1=0;
		t2=0;
		for(i=0;i<len;i++){
			if(b[i]==-1){
				l[t1]=i;
				t1++;
			}
			if(b[i]==1){
				r[t2]=i;
				t2++;
			}
		}
		for(i=t1-1;i>=0;i--){
			for(j=0;j<t2;j++){
				if(r[j]>l[i]){
					b[r[j]]=0;
					b[l[i]]=0;
					r[j]=0;
					l[i]=0;
					break;
				}
			}
		}
		puts(s);
		for(i=0;i<len;i++){
			if(b[i]==-1){
				printf("$");
			}
			else if(b[i]==1){
				printf("?");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}

