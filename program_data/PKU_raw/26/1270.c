int main(){
char a[300],b[300];
int l,i,j,k,m;
gets(a);
l=strlen(a);
for(i=0,j=0;i<l;i++,j++){
k=0;
b[j]=a[i];
if(a[i]==' '){
for(m=i+1;m<l;m++){
if(a[m]==' '){
k++;
}
else{
break;
}}
i=i+k;
}}
b[j]='\0';
puts(b);
return 0;
}