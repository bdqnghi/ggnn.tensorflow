int main(){
int i,k,l,s=0,p=0;
double n,m;
char a[600],b[600];
scanf("%lf",&n);
scanf("%s%s",&a,&b);
k=strlen(a),l=strlen(b);
for(i=0;i<k;i++){
    if((a[i]!='A')&&(a[i]!='T')&&(a[i]!='C')&&(a[i]!='G')){
        p++;
    }
}
for(i=0;i<k;i++){
    if(a[i]==b[i]){
        s++;
    }
}
m=1.0*s/k;
if((k==l)&&(p==0)&&(m>n)){
    printf("yes");
}
else if((k==l)&&(p==0)&&(m<=n)){
    printf("no");
}
else{
    printf("error");
}
return 0;
}
