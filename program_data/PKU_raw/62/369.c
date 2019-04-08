char t[200];
int main(){
int s,i,j,n,l;
gets(t);
l=strlen(t);
for(i=0;i<200;i++)
for(j=0;j<l;j++){
if(t[j]==' '&&t[j+1]==' '){
for(s=j;s<l;s++)
t[s]=t[s+1];
}
}
puts(t);
return 0;
}