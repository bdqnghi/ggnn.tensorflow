int main() {
char a[101] ;
gets(a);
char b=a[0];
for(int i=0;a[i];i++){
if((b==' ')&&(a[i]==' ')){
continue;
}else{
printf("%c",a[i]);
b=a[i];
}
}
printf("\n");
return 0;
}
