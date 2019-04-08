int main()
{int n,i,j,k,a,b,c;
c=0;
char t[256]={0};
char s[256]={0};
char r[256]={0};
char z[256]={0};
scanf("%s %s %s",t,s,r);
a=strlen(t);
b=strlen(s);
for(i=0;i<=a-b;i++)
{for(j=i;j<b+i;j++)
z[j-i]=t[j];
if(strcmp(z,s)==0)
{c=i;
break;
}
}
if(c==0)
{for(i=0;i<a;i++)
printf("%c",t[i]);}
else
{for(i=0;i<c;i++)
printf("%c",t[i]);
printf("%s",r);
for(j=c+b;j<a;j++)
printf("%c",t[j]);
}
return 0;
}
