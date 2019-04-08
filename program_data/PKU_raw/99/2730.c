int main() {
int i,n,x;
double a,b,c,d,e,f,g,h;
scanf("%d",&n);
for (i=1;i<=n;i++) {
scanf("%d",&x);
if (x<19) a++;
else if (x<36) b++;
else if (x<61) c++;
else d++;
}
e=a/n*100;
f=b/n*100;
g=c/n*100;
h=d/n*100;
printf("1-18: %.2lf%%\n",e);
printf("19-35: %.2lf%%\n",f);
printf("36-60: %.2lf%%\n",g);
printf("60??: %.2lf%%\n",h);
}