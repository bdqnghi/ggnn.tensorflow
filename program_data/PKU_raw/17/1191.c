void main(){
	char b[100];
	int i,j,t,l,k=2;
	while(1){
		char a[100];
		a[0]='\0';
		scanf("%s",a);
		l=strlen(a);
		if(l==0)
			break;
		printf("%s\n",a);
		for(i=0;i<l;i++){
			if(a[i]=='(')
				b[i]='$';
			else if(a[i]==')')
				b[i]='?';
			else
				b[i]=' ';
		}
		b[l]='\0';
		for(i=0;i<l;i++){
			if(a[i]=='('){
				t=0;
				for(j=i+1;j<l;j++){
					if(a[j]=='(')
						t--;
					if(a[j]==')')
						t++;
					if(t==1){
						b[i]=b[j]=' '; 
						a[i]=a[j]='a';
						break;
					}
				}
			}
		}
		for(i=0;i<l;i++){
			printf("%c",b[i]);
		}
		printf("\n");
	}
}