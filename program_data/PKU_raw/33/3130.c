int main(){
char a[256];
int n,i,j;
gets(a);
n=atoi(a);
for(i=0;i<n;i++){
gets(a);
for(j=0;a[j]!='\0';j++){
if(a[j]=='A'){
a[j]='T';
}else if(a[j]=='C'){
a[j]='G';}
else if(a[j]=='G'){
a[j]='C';}
else if(a[j]=='T'){
a[j]='A';}}
puts(a);}
return 0;
}
