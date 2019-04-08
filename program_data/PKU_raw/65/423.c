int main(){
int n,i;
int a[201],b[201];
int c=0,d=0;
scanf("%d\n",&n);
for(i=0;i<n;i++){
scanf("%d %d",&a[i],&b[i]);
}
for(i=0;i<n;i++){
	if(a[i]==0&&b[i]==1){
	c++;}
	else if(a[i]==0&&b[i]==2){
	d++;}
	else if(a[i]==1&&b[i]==0){
	d++;}
	else if(a[i]==1&&b[i]==2){
	c++;}
	else if(a[i]==2&&b[i]==0){
	c++;}
	else if(a[i]==2&&b[i]==1){
	d++;}
}
if(c==d){
printf("Tie");}
if(c>d){
printf("A");}
if(c<d){
printf("B");}
return 0;  
}