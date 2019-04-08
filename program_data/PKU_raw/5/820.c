int yn(char x);
int main(){
char a[501],b[501];
double q,p;
int i,s,l1,l2,o;
scanf("%lf%s%s",&p,a,b);
l1=strlen(a);
l2=strlen(b);
o=0;
if (l1!=l2) o=1;
for (i=0;i<l1;i++)
if (yn(a[i])==1) {o=1;break;}
for (i=0;i<l2;i++)
if (yn(b[i])==1) {o=1;break;}
if (o==1) printf("error");
else {
s=0;
for (i=0;i<l1;i++)
if ((a[i])==b[i]) s=s+1;
q=1.0*s/l1;
if (q>p) printf("yes");
else printf("no");
}
return 0;
}
int yn(char x){
int a;
if ((x=='A')||(x=='T')||(x=='C')||(x=='G')) a=0;
else a=1;
return a;
}