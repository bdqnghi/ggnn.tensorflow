void main()
{char c[10000];int i,j,w,l,n;
gets(c);
l=strlen(c);
w=0;
for(i=0;i<l;i++)
{if(c[i]==' ') w=0;
else if(w==0) {w=1;for(j=i,n=0;c[j]!=' '&&c[j]!='\0';j++) n=n+1;printf("%d",n);if(c[j]!='\0') printf(",");}}
}
