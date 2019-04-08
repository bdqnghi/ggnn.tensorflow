int main()
{char a[100],b[100],t;
scanf("%s%s",a,b);
int m,n,i,j;
m=strlen(a);
n=strlen(b);
if(m!=n)
printf("NO");
else
{for(i=0;i<m;i++)
{for(j=i;j<m;j++)
{if(a[i]==b[j])
{t=b[i];
b[i]=b[j];
b[j]=t;
break;}
}
if(a[i]!=b[i]&&j==m)
{printf("NO");
break;}
}
for(i=0;i<m;i++)
{if(a[i]!=b[i])
{printf("NO");break;}}
if(i==m)
printf("YES");
}
return 0;
}