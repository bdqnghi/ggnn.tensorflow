int main(){
char a[1000][NUM];
char b[1000][NUM];
int i, t, k, n;
scanf("%d", &n);
for(i=0;i<n;i++){
	scanf("%s", a[i]);
}
for(i=0;i<n;i++){
	t=strlen(a[i]);
      for(k=0;k<t;k++){
			if(a[i][k]=='A'){
				b[i][k]='T';
			}else if(a[i][k]=='T'){
				b[i][k]='A';
			}else if(a[i][k]=='G'){
				b[i][k]='C';
			}else if(a[i][k]=='C'){
				b[i][k]='G';
			}
		}
}
for(i=0;i<n;i++){
	t=strlen(a[i]);	
    b[i][t]='\0';
    printf("%s\n", b[i]);
}
return 0;
}
