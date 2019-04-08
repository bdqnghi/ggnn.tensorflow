int main(){
	int n,a,b,c;
	scanf("%d",&n);
a=n%3;
b=n%5;
c=n%7;
if(a==0&&b==0&&c==0){
	printf("%d %d %d",3,5,7);
}else if(a==0&&b!=0&&c!=0){
	printf("%d",3);
}else if(b==0&&a!=0&&c!=0){
	printf("%d",5);
}else if(c==0&&b!=0&&a!=0){
	printf("%d",7);
}else if(a==0&&b==0&&c!=0){
	printf("%d %d",3,5);
}else if(a==0&&b!=0&&c==0){
	printf("%d %d",3,7);
}else if(a!=0&&b==0&&c==0){
	printf("%d %d",5,7);
}else {
	printf("n");
}
return 0;
}