void swi(int l,char s[200]){
	int i,t;
	for(i=0;i<l/2;i++){
		t=s[i];
		s[i]=s[l-i-1];
		s[l-i-1]=t;
	}
	return;
}
int main(){
	char m[200],n[200],t[200];
	int n1,i,j,k,lm,ln,q,flag,num;
	scanf("%d",&num);
	for(n1=0;n1<num;n1++){
		scanf("%s %s",m,n);
		flag=0;
		lm=strlen(m);
		ln=strlen(n);
		if(lm<ln)
			flag=1;
		else if(lm==ln&&strcmp(m,n)<0)
			flag=1;
		if(flag){
			strcpy(t,m);
			strcpy(m,n);
			strcpy(n,t);
			q=lm;
			lm=ln;
			ln=q;
			putchar('-');
		}
		swi(lm,m);
		swi(ln,n);
		for(i=0;i<ln;i++){
			if(m[i]>=n[i])
				m[i]-=n[i];
			else{
				m[i]=10+m[i]-n[i];
				for(k=1;!m[i+k];k++);
				for(q=1;q<k;q++)
					m[i+q]=9;
				m[i+q]--;
			}
		}
		for(i=ln;i<lm;i++)
			m[i]-='0';
		for(lm--;!m[lm];lm--);
		swi(lm+1,m);
		for(i=0;i<=lm;i++)
			printf("%d",m[i]);
		if(n1<num-1)
			putchar('\n');
	}
	return 0;
}
