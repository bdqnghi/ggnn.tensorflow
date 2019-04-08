int main(){
char zf[200];
gets(zf);
int i=0;
int k;
int s,b;
int len=strlen(zf);
while(zf[i]){
	if(zf[i]==' '&&zf[i+1]==' '){
     b=i;
	 k=i;
	while(zf[k]==' '){
     k=k+1;
	}
	s=k-i;
	while(b<=len-s){
		zf[b+1]=zf[b+s];
		b++;
		
	}
	len=len-s+1;
	}
	i=i+1;

}

printf("%s",zf);

return 0;
}
