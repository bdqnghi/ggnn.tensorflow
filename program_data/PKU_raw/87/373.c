void qkg(char *a);
void qdykg(char *a);
void dbx(char *a);
int main(){
	int a,b,c,d,e,f;
	int sw;
	int xw;
	while(1){
		
		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		if(a==0){
			break;
		}
		sw=(12-a)*3600-b*60-c;
		xw=d*3600+e*60+f;
		int ans=sw+xw;
		printf("%d\n",ans);
	}
	return 0;
}
void qkg(char *a){
	int len;
	len=strlen(a);
	int i,j=0;
	char b[100];
	for(i=0;i<len;i++){
		if(a[i]!=' '){
			b[j]=a[i];
			j++;
		}
	}
	b[j]='\0';
	strcpy(a,b);
}
void qdykg(char *a){
	int len;
	len=strlen(a);
	int i,j=0;
	char b[101];
	for(i=0;i<len;i++){
		if(a[i]!=' '){
			b[j]=a[i];
			j++;
		}else if(a[i]==' '&&a[i+1]!=' '){
			b[j]=a[i];
			j++;
		}
	}
	b[j]='\0';
	strcpy(a,b);
}
void dbx(char *a){
	int len;
	len=strlen(a);
	int i;
	for(i=0;i<len;i++){
		if(a[i]>='A'&&a[i]<='Z'){
			a[i]+='a'-'A';
		}
	}
}