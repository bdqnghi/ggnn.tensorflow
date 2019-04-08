int main(){
char a[266],s[22],z[22];
gets(a);
gets(s);
gets(z);
int n,i,j,l=1,m,q,w,e;
for(i=0;a[i]!='\0';i++){
	if(s[0]==a[i]){
	l=1;
	m=i;
	for(w=0;s[w]!='\0';w++){
		if(s[w]!=a[i]){
		l=0;}
		i++;}
		
		if(l){
			break;
		}
	}
	}

for(n=0;s[n]!='\0';n++){
1;}
if(l){
		for(j=0;a[j]!='\0';j++){
			if(m==48){m=17;}
			if(j==m){
				for(e=0;z[e]!='\0';e++){
				printf("%c",z[e]);
				}
				j=m+n-1;
			}
			else {
				printf("%c",a[j]);}
		}
}
		
									
	return 0;}
