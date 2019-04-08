int main (){
int x,y,w=0,i,o=0;
double c,k;
char a[501],b[501];
scanf ("%lf",&c);
scanf ("%s%s",a,b);
x=strlen(a);
y=strlen(b);
if (x!=y){
printf ("error");
}else if(x==y){
for (i=0;i<x;i++){
if ((a[i]!='A'&&a[i]!='T'&&a[i]!='G'&&a[i]!='C')||(b[i]!='A'&&b[i]!='T'&&b[i]!='G'&&b[i]!='C')){
printf ("error");
o++;
break;
}else{
if (a[i]==b[i])
w++;
}
}
k=1.0*w/x;
if (o==0){
if (k>c)
printf ("yes");
else
printf ("no");
}
}
return 0;
}

