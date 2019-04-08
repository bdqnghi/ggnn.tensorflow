int main(){
	int i,e=0,j,n,m;
	char s[256],a[256],b[256];
	
	gets(s);
	gets(a);
	gets(b);
	char *pa=a,*ps=s,*p;
	n=strlen(s);
	m=strlen(a);
	for(i=0;*ps!='\0';ps++,i++){
		if(*pa==*ps){
			e++;
			for(pa=pa+1,ps=ps+1;*pa!='\0';pa++,ps++){
				if(*pa==*ps){
					e++;
				}
			
			}
		}
	   
		if(e==m){
			
           
            p=s;
			for(j=0;j<i;j++){
				printf("%c",*p);
				p++;
			}
			printf("%s",b);
			if(n-i>m){
				for(j=0;j<m;j++){
					p++;
				}
				printf("%s",p);
			    break;
			}
			else{
				break;
			}
		}
		else{
			if(e>0){
			pa=a;
			for(j=0;j<m;j++){
			   ps--;
			}
			}
		}
		e=0;
	}

	if(e!=m){
		printf("%s",s);
	}
	return 0;
}
