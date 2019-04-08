int main()
{
char str[256],sub[256],rep[256];
scanf("%s%s%s",str,sub,rep);
int m,n,i,j,e,k;
n=strlen(str);
m=strlen(sub);
for(i=0;i<n;i++)
{
e=0;
for(j=0;j<m;j++)
{
if(str[i+j]==sub[j])e++;
}
if(e==m)break;
}
if(e==m)
{
for(k=0;k<i;k++)printf("%c",str[k]);
printf("%s",rep);
for(k=i+m;k<n;k++)printf("%c",str[k]);
}else{printf("%s",str);}
return 0;
}