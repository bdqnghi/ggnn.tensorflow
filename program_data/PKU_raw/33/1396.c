char pd(char x);
int main(){
char a[256],b[256];
int i,j,l,n;
scanf("%d",&n);
for (i=1;i<=n;i++){
scanf("%s",a);
l=strlen(a);
for (j=0;j<l;j++)
b[j]=pd(a[j]);
b[l]=0;
printf("%s\n",b);
}
return 0;
}
char pd(char x){
char y;
if (x=='A') y= 'T';
if (x=='T') y= 'A';
if (x=='C') y= 'G';
if (x=='G') y= 'C';
return y;
}
