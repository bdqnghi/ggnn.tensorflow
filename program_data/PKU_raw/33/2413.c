int main(){
int n,i,j;
char a[256];
char N[1000];
gets(N);
n=atoi(N);
for(j=0;j<n;j++){
gets(a);
int l=strlen(a);
for(i=0;i<l;i++){
if(a[i]=='A'){
a[i]='T';
}else if(a[i]=='T'){
a[i]='A';
}else if(a[i]=='C'){
a[i]='G';
}else if(a[i]=='G'){
a[i]='C';
}
}
puts(a);
}
return 0;
}