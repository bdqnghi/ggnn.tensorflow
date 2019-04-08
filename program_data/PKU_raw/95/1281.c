int main (){
int i,j;
char a[81],b[81];
gets(a);
gets(b);
for (i=0;a[i]!='\n';i++){
if (a[i]>='a'&&a[i]<='z')
a[i]+='A'-'a';
}
for (j=0;b[j]!='\n';j++){
if (b[j]>='a'&&b[j]<='z')
b[j]+='A'-'a';
}
if (strcmp(a,b)<0)
printf("<");
else if (strcmp(a,b)>0)
printf (">");
else
printf ("=");
return 0;
}