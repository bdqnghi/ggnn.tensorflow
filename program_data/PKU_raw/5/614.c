int main(){
double a,b;
int p=0,n,m,k=0;
char sb[531]={0};
char dsb[531]={0};
scanf("%lf",&a);
scanf("%s%s",sb,dsb);
for(int i=0;i<531;i++){
if(sb[i]==dsb[i]&&sb[i]!=0){
p++;
}
if(((sb[i]!='A')&&(sb[i]!='C')&&(sb[i]!='T')&&(sb[i]!='G')&&(sb[i]!=0))||((dsb[i]!='A')&&(dsb[i]!='C')&&(dsb[i]!='T')&&(dsb[i]!='G')&&(dsb[i]!=0)))
k=1;
}
n=strlen(sb);
m=strlen(dsb);
b=1.0*p/n;
if(m!=n||k==1) printf("error");
else if(b>a){
printf("yes");
}
else printf("no");
return 0;
}

