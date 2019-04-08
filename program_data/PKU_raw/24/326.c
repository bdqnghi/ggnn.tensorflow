void main()
{char a[1000]={'\0'},c[50][20]={'\0'};int b,i,j,k,l,m,n,r=0,s,t,w;
gets(a);
b=strlen(a);
w=0;
for(i=0;i<b;i++)
{if(a[i]==' ') w=0;
 else if(w==0) {w=1;j=i;for(k=j,s=0;a[k]!=' '&&a[k]!='\0';k++,s++) c[r][s]=a[k];r++;}}
t=r;


m=strlen(c[0]);
for(r=0;r<t;r++)
{l=strlen(c[r]);
 if(l>m) m=l;}
for(r=0;r<t;r++)
{l=strlen(c[r]);
 if(l==m) {puts(c[r]);break;}}

n=strlen(c[0]);
for(r=0;r<t;r++)
{l=strlen(c[r]);
 if(l<n) n=l;}
for(r=0;r<t;r++)
{l=strlen(c[r]);
 if(l==n) {puts(c[r]);break;}}
}