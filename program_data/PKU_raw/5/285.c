int main(){
	int m=0,f,i,g,p=1;
	double x;
	char s[501],t[501];
	scanf("%lf",&x);
    scanf("%s",s);
	scanf("%s",t);
	f=strlen(s);
	g=strlen(t);
	if(f!=g){p=0;}
	else{
		for(i=0;i<f;i++){
            if((s[i]!='A'&&s[i]!='T'&&s[i]!='G'&&s[i]!='C')||
				(t[i]!='A'&&t[i]!='T'&&t[i]!='G'&&t[i]!='C')){p=0;}
		}
	}
	if(p==0){printf("error");}
	else{
	  for(i=0;i<f;i++){
		if(t[i]==s[i]){
			m++;
		}
	  }
	  if(1.0*m/f>x){printf("yes");}
	  else{printf("no");}
	}
	return 0;
}
