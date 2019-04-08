int main (){
double n;
char a[MAX+1];
char b[MAX+1];
int p,q,i,j,x=0,y=0,l=0;
scanf ("%lf",&n);
scanf ("%s",a);
scanf ("%s",b);
p=strlen(a);
q=strlen(b);
if (p!=q){
printf ("error");
}
if (p==q){
for(i=0;a[i];i++){
if (a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G'){
printf ("error");
x++;
break;
}
}
for(j=0;b[j];j++){
if (b[j]!='A'&&b[j]!='T'&&b[j]!='C'&&b[j]!='G'&&x==0){
printf ("error");
y++;
break;
}
}
}
if (p==q&&x==0&&y==0){
for(i=0;i<p;i++){
if(a[i]==b[i]){
l++;
}
}
if (l*1.0/p>n){
printf("yes");
}else{
printf ("no");
}
}
return 0;
} 

