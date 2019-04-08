int main(){
	char a[10000];
	int s,t=0;
	int n,i;
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++){
		if(a[i]!=' '){
			s=0;
			while(1){
				s++;
				i++;
				if(a[i]==' '||i>=n)
					break;
			}
			if(t==0){
				t++;
			    printf("%d",s);
			}
			else
				printf(",%d",s);
		}
	}
    return 0;
}