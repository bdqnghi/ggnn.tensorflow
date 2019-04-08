int main()
{	
	double a,c;
	char s[1000],as[1000];
	int m,n,t,i,b;
	scanf("%lf",&a);
	scanf("%s %s",s,as);
	t=0;
	for(i=0;s[i]!='\0';i++){
		if(s[i]!=65&&s[i]!=67&&s[i]!=71&&s[i]!=84){
			t=-1;
			break;
		}
	}
    for(i=0;as[i]!='\0';i++){
		if(as[i]!=65&&as[i]!=67&&as[i]!=71&&as[i]!=84){
			t=-1;
			break;
		}
	}
    m=strlen(s);
	n=strlen(as);
	if(m!=n){
		t=-1;
	}
	b=0;
	if(t==0){
		for(i=0;s[i]!='\0';i++){
			if(s[i]==as[i]){
				b++;
			}
		}
    	c=1.0*b/m;
    	if(c>a){
		   t=1;
		}
    	else{
		t=0;
		}
	}
	if(t==-1){
		printf("error\n");
	}
	if(t==0){
		printf("no\n");
	}
	if(t==1){
		printf("yes\n");
	}
    return 0;
}
