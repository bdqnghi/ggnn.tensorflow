int main(){
char s[10000],d[200][50],b[50],c[50];
int i,j,l,n=0,k=0,p,q,m;
gets(s);
l=strlen(s);
for(i=0;i<l;i++){
if(s[i]!=' '){
d[n][k]=s[i];
k++;
}
else{

n++;
k=0;
}}
n++;
p=strlen(d[0]);
q=p;
strcpy(b,d[0]);
strcpy(c,d[0]);
for(j=1;j<n;j++){
m=strlen(d[j]);
if(p<m){
p=strlen(d[j]);
strcpy(b,d[j]);
}
if(q>m){
q=strlen(d[j]);
strcpy(c,d[j]);
}}

printf("%s\n%s",b,c);
return 0;
}