int main(){
	double n,m;
	int i,a,b,c,d,e;
	char w[501],f[501];
	scanf("%lf",&n);
	scanf("%s%s",w,f);
	a=0;
	b=0;
	c=strlen(w);
	d=strlen(f);
	e=0;
	if(c!=d){
		e=1;
	}	
	else{	
		for (i=0;i<c;i++){
			if(!(w[i]=='A'||w[i]=='C'||w[i]=='T'||w[i]=='G')){
			e=1;
			break;
			}
		}
		for (i=0;i<d;i++){
			if(!(f[i]=='A'||f[i]=='C'||f[i]=='T'||f[i]=='G')){
			e=1;
			break;
			}
		}
	}
	if (e==1){printf("error");
	}
	else{
		for(i=0;i<d;i++){
			if(w[i]==f[i]){
			a++;
			}
			b++;
		}
		m=1.0*a/b;
		if(m>=n){printf("yes");
		}
		else if(m<n){printf("no");
		}
	}
	return 0;
}



