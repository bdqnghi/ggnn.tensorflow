int h(char s[1000]){
	int i;
	for (i=0;i<strlen(s);i++){
		if (s[i]!='A'&&s[i]!='G'&&s[i]!='T'&&s[i]!='C'){
			i=1;
			break;
		}
	}
    if(i!=1){
		i=0;
	}
	return i;
}
int main () {
	double c,d,e ;
	int j;
	char a[1000],b[1000];
    scanf("%lf",&c);
	scanf("%s",a);
	scanf("%s",b);
	if (strlen(a)!=strlen(b)){
		printf("error");
	}
	else if(h(a)||h(b)){
		printf("error");
	}
	else {
		e=0;
		for (j=0;j<strlen(a);j++){
			if (a[j]==b[j]){
				e++;
			}
		}
		d=e/strlen(a);
		if (d>=c){
			printf("yes");
		}
		else {
			printf("no");
		}
	}
	return 0;
}

