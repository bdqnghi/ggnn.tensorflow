int main()
{
int t, j, k, i, num[200]={0};
char a[1000], s[1000];
scanf("%d", &t);
for(i=0;i<t;i++)
{
scanf("%s", a);
int len=strlen(a);
for(j=0;j<len;j++)
{
num[a[j]]++;
}
for(j=0;j<len;j++)
{
if(num[a[j]]==1)
{
printf("%c", a[j]);
break;
}
}
 if(j==len)
{
printf("no");
}

printf("\n");
memset(num,0,sizeof(num));
}
return 0;
}