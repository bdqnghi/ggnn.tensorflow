int main() {
int i;
scanf("%d",&i);
if(i%3==0 && i%5==0 && i%7==0){
	printf("3 5 7");
}else{
if(i%15==0){
	printf("3 5");
}else{
if(i%21==0){
	printf("3 7");
}else{
if(i%35==0){
	printf("5 7");
}else{
if(i%3==0){
	printf("3");
}else{
if(i%5==0){
	printf("5");
}else{
if(i%7==0){
	printf("7");
}else{
	printf("n");
}
}
}
}
}
}
}	
return 0;
}
