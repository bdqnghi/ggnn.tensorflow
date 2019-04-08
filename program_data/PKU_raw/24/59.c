int main()
{char a[100],*p;
int n=0,b[100],s[100],e,d,max,min,i,*h,*q;
gets(a);
p=a;
h=s;
q=b;
q[0]=-1;
for(i=0;p[i]!='\0';i++)
{if(p[i]==' ')
{n=n+1;
q[n]=i;}
}
for(i=q[n]+1;p[i]!='\0';i++)
{}
n=n+1;
q[n]=i;
for(i=1;i<=n;i++)
h[i]=q[i]-q[i-1]-1;
max=h[1];min=h[1];
for(i=1;i<=n;i++)
{if(max<h[i])
max=h[i];
if(min>h[i])
min=h[i];
}
for(i=1;i<=n;i++)
{if(h[i]==max)
{d=i;break;}
}
for(i=q[d-1]+1;i<q[d];i++)
printf("%c",p[i]);
printf("\n");
for(i=1;i<=n;i++)
{if(h[i]==min)
{e=i;break;}
}
for(i=q[e-1]+1;i<q[e];i++)
printf("%c",p[i]);
return 0;
}