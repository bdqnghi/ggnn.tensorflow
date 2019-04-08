int main(){
	int n,m,i,k,num=0,flag=0;
	double l;
	char a[501],b[501],s[10];
	gets(s);
	k=atoi(s);
	gets(a);
	gets(b);
	n=strlen(a);
	m=strlen(b);
	for(i=0;a[i]!='\0';i++){
		if((a[i]!='A')&&(a[i]!='T')&&(a[i]!='C')&&(a[i]!='G')){
			flag=1;
			break;
		}
	}
	if((n==m)&&(flag==0)){
		for(i=0;a[i]!='\0';i++){
			if(a[i]==b[i]){
				num++;
			}
		}
		l=(double)num/n;
		if(l>k){
			printf("yes");
		}
		else{
			printf("no");
		}
	}
	else{
		printf("error");
	}
	return 0;
}
