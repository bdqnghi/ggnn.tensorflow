int main(){
	int i,a,b;
	int s=0;
	int t=1;
	double x,y,aa,ss;
	char sa[501];
	char sb[501];
	gets(sa);
	x=atof(sa);
	gets(sa);
	gets(sb);
	a=strlen(sa);
	b=strlen(sb);
	if(a!=b){
		t=0;
	}
	else if(a==b){
		for(i=0;i<a;i++){
			if((sa[i]!='A'&&sa[i]!='G'&&sa[i]!='T'&&sa[i]!='C')||(sb[i]!='A'&&sb[i]!='G'&&sb[i]!='T'&&sb[i]!='C')){
				t=0;
				break;
			}else if(sa[i]==sb[i]){
				s++;
			}
		}
	}
	aa=a;
	ss=s;
	y=ss/aa;
	if(t==0){
		printf("error");
	}else if(y>=x){
		printf("yes");
	}else if(y<=x){
		printf("no");
	}
	return 0;
}
