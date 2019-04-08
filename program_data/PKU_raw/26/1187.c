int main()
{
char a[1000];
int i,k,j=0,n,m=0;
gets(a);
while(1){
for(i=0;a[i]!='\0';i++){
if(a[i]==' '&&a[i+1]==' '){
for(k=i;a[k]!='\0';k++){
a[k]=a[k+1];
}
}
}
j=0;
for(m=0;a[m]!='\0';m++){
if(a[m]==' '){
if(a[m+1]==' '){
    j++;
}
}
}
if(j==0){
    break;
}
}
puts(a);
return 0;
}

