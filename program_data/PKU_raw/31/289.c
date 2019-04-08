main()
{
char a[2000][20],b[2000][20],c[2000][20],d[2000][20],e[2000][20],s[2000][20];
int i=0,j;
scanf("%s",a[i]);
while(1)
{
scanf("%s",b[i]);
scanf("%s",c[i]);
scanf("%s",e[i]);
scanf("%s",s[i]);
scanf("%s",d[i]);
i++;
scanf("%s",a[i]);
if(a[i][0]=='e')
break;
}
for(j=i-1;j>=0;j--)
{
printf("%s %s %s %s %s %s\n",a[j],b[j],c[j],e[j],s[j],d[j]);
}
}
