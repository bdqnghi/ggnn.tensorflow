char a[100],b[100],c[100];
int main(){
	int sum=0;
	double m;
	double s;
	scanf("%lf",&m);
	scanf("%s",a);
	scanf("%s",b);
	int x,y;
	x=strlen(a),y=strlen(b);
	a[x]='\0';
	b[y]='\0';
	if(x!=y){
		printf("error");
		return 0;
	}
	int i;
	for(i=0;i<x;i++){
		if(a[i]=='A'){
			c[i]='A';
		}
        else if(a[i]=='T'){
			c[i]='T';
		}
        else if(a[i]=='C'){
			c[i]='C';
		}
        else if(a[i]=='G'){
			c[i]='G';
		}
		else{
			printf("error");
			return 0;
		}
	}
	for(i=0;i<x;i++){
		if(b[i]==c[i]){
			sum++;
		}
	}
	s=1.0*sum/x;
	if(s>=m){
		printf("yes");
	}
	else{
		printf("no");
	}
	return 0;
}
	










	