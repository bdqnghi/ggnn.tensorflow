int main(){
double q,c;
int t,s,i,l1,l2;
char a[501],b[501];
scanf("%lf",&q);
scanf("%s%s",a,b);
l1=strlen(a);
l2=strlen(b);
if (l1!=l2) printf("error");
else {
t=0;
for (i=0;i<l1;i++) 
if(((a[i]!='A')&&(a[i]!='T')&&(a[i]!='C')&&(a[i]!='G'))||((b[i]!='A')&&(b[i]!='T')&&(b[i]!='C')&&(b[i]!='G'))) {
	printf("error");
    t=1;
	break;
} 
if (t==0){
s=0;
for (i=0;i<l1;i++)
if (a[i]==b[i]) s=s+1;
c=1.0*s/l1;
if (c>q) printf("yes");
else printf("no");
}
}
return 0;
}