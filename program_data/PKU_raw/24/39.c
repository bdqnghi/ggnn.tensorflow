int main()
{char a[100];
int n=0,b[100],s[100],e,d,max,min,i;
b[0]=-1;
gets(a);
for(i=0;a[i]!='\0';i++)
{if(a[i]==' ')
{n=n+1;
b[n]=i;}
}
for(i=b[n]+1;a[i]!='\0';i++)
{}
n=n+1;
b[n]=i;
for(i=1;i<=n;i++)
s[i]=b[i]-b[i-1]-1;
max=s[1];min=s[1];
for(i=1;i<=n;i++)
{if(max<s[i])
max=s[i];
if(min>s[i])
min=s[i];
}
for(i=1;i<=n;i++)
{if(s[i]==max)
{d=i;break;}
}
for(i=b[d-1]+1;i<b[d];i++)
printf("%c",a[i]);
printf("\n");
for(i=1;i<=n;i++)
{if(s[i]==min)
{e=i;break;}
}
for(i=b[e-1]+1;i<b[e];i++)
printf("%c",a[i]);
return 0;
}
