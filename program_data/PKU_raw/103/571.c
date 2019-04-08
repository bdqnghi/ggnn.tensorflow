int main(){
	int n=1,i,j,m=0;
	char k[1001],y[27]="abcdefghijklmnopqrstuvwxyz",z[27]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int s[26];
	scanf("%s",k);
    for(i=0;i<strlen(k);i++){
    for(j=0;j<26;j++){
    if(k[i]==y[j])
    k[i]=z[j];}}
	for(i=0;i<strlen(k);i=i+n){
    printf("(%c,",k[i]);
    for(n=0;n<(strlen(k)-i);n++){
    if(k[i+n]==k[i])
    m++;
    else
    break;}
    printf("%d)",m);
    m=0;}
}
