int main(){
	float n,f;
	int l,c,o=0,k=0,v=0;
	char a[501]={0},b[501]={0};
	scanf("%f\n",&n);
	scanf("%s",a);
	scanf("%s",b);
    l=strlen(a);
	c=strlen(b);
    for(int q=0;q<l;q++){
		if(a[q]<'A'||a[q]>'Z'){
			o=1;
	break;}}
    for(int p=0;p<l;p++){
		if(b[p]<'A'||b[p]>'Z'){
			k=1;
	break;}}
		if(o==1||k==1||l!=c){
			printf("error");}else{
				for(int g=0;g<c;g++){
					if(a[g]==b[g]){
						v++;}
				}
		f=(float)v/(float)c;
	
		if(f>n){
			printf("yes");}
		else{printf("no");}
			}
	return 0;}