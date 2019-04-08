int main()
{
int i,n,m,bd,j,k;
char s[51],w[51];
scanf("%s%s",&s,&w);
n=strlen(w);
m=strlen(s);
for(i=0;i<n;i++)
{
bd=1;
for(j=0,k=i;j<m;j++,k++)
{
if(w[k]!=s[j])
bd=0;
}
if(bd==1)
{
printf("%d",i);
break;
}
}
return 0;
}