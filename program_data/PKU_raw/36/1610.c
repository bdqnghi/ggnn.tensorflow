int main()
{
char a[500]={0},b[500]={0};
int c[500]={0},sum=0;
scanf("%s %s",a,b);
int i,j;
if(strlen(a)!=strlen(b))
{printf("NO");return 0;}
else
{
for(i=0;i<strlen(a);i++)
for(j=0;j<strlen(b);j++)
if((a[i]==b[j])&&(a[i]!='0')&&(c[j]==0))
{c[j]=1;break;}
for(i=0;i<strlen(b);i++)
sum=sum+c[i];
if(sum==strlen(b))
printf("YES");
else
printf("NO");
}
}