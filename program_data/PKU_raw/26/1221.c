int main()
{
	char x[101];
	int i,l,t,j,L;
	gets(x);
	l=strlen(x);
	t=0;
	L=l;
	for(i=0;i<l;i++){
		if(x[i]==' '){
			if(t==1){
				for(j=i;j<l-1;j++){
					x[j]=x[j+1];
				}
				L--;
				i--;
			}
			else{
				t=1;
			}
		}
		else{
			t=0;
		}
	}
	x[L]='\0';
	puts(x);
	return 0;
}