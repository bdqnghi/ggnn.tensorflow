int main(){
char sz[101];
int a,b;
gets(sz);
for(a=0;sz[a]!='\0';a++){
while(1){
if((sz[a]==' ')&&(sz[a+1]==' ')){
for(b=a+1;sz[b]!='\0';b++){
sz[b]=sz[b+1];
}
}else{
break;
}
}
}
puts(sz);
return 0;
}