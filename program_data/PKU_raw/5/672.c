
int main(){
	int i,c,d,j=1;
	double n,m,q=0;
    char a[501],b[501];
	scanf("%lf",&n);
	scanf("%s",a);
    scanf("%s",b);
	c=strlen(a);
	d=strlen(b);
	
	for(i=0;a[i];i++){
		if((a[i]!='T'&&a[i]!='A'&&a[i]!='G'&&a[i]!='C')||(b[i]!='A'&&b[i]!='G'&&b[i]!='T'&&b[i]!='C')||c!=d){
            printf("error");
			j=0;
		break;}}
	if(j==1){
	for(i=0;a[i];i++){
		if(a[i]==b[i]){
			m++;}}
	q=m/c;
	if(q>n){
		printf("yes");}
	else{
		printf("no");}}

			
return 0;
}