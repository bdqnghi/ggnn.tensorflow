int main(){
	
	int a[501],b,c,n,m,t,j,l,jl;
	char s[501],u[501][501];
	scanf("%d",&n);
	scanf("%s",s);
	l=strlen(s);

	for(b=0;b<=l-n;b++){
		for(c=0;c<n;c++){
			u[b][c]=s[b+c];
		}
		u[b][n]='\0';
		
	}

	jl=0;
	for(b=l-n;b>=0;b--){
		a[b]=1;
		for(c=b+1;c<=l-n;c++){
			if(strcmp(u[c],u[b])==0){
				a[b]=a[c]+1;
				if(a[b]>jl){jl=a[b];
				}
				break;
			}
		}
	}
	
		
	
	
	
	if(jl==0||jl==1){
		printf("NO");
			return 0;
	}
	printf("%d\n",jl);
	for(b=0;b<=l-n;b++){
		if(a[b]==jl){
		puts(u[b]);
		}
	}
	return 0;
}