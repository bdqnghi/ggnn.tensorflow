int main(){
char sz[10000];
int i,a;
gets(sz);
a=0;
for(i=0;sz[i]!='\0';i++){
if(sz[i]!=' '){
a=a+1;
}else{
if(a!=0){
printf("%d",a);
printf(",");
a=0;
}
}
}
printf("%d",a);
return 0;
}