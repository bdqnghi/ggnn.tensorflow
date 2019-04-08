int main()
{long int ss,s,n,k,i,o;
scanf("%d%d",&n,&k);
ss=1;
while(1)
{ss=ss+1;
s=ss;
o=0;
for(i=1;i<=n;i++)
{if((s*(n-1)-(n-1)*k)%n==0&&s*(n-1)-(n-1)*k!=0)s=(s*(n-1)-(n-1)*k)/n;
else {o=1;break;}
}
if(o==0)break;
}
printf("%d",ss);
}
