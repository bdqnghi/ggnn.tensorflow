int main()
{
int i,n,j,n1,k,sum=0;
char a[257],b[257],c[257];
gets(a);
gets(b);
gets(c);
n=strlen(a);
n1=strlen(b);
for(i=0;i<n-n1+1;i++)
{
sum=0;
for(j=i,k=0;j<i+n1;j++,k++)
{
if(a[j]!=b[k])
sum=1;
}
if(sum==0)
{
for(j=i,k=0;j<i+n1;j++,k++)
a[j]=c[k];
break;
}
}
printf("%s",a);
return 0;
}

