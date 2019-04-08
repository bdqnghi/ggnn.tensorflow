int main()
{
int i,j,len,a,b,t=0;
long shu1;
char s[100];
int c[100];
scanf("%d",&a);
scanf("%s",s);
scanf("%d",&b);
len=strlen(s);
if(a<=10)
{
shu1=s[0]-'0';
for(i=1;i<len;i++)
{
shu1=shu1*a+s[i]-'0';
}
}
else
{
if(s[0]>='0'&&s[0]<='9')
shu1=s[0]-'0';
else if(s[0]>='a'&&s[0]<='z')
shu1=s[0]-'a'+10;
else if(s[0]>='A'&&s[0]<='Z')
shu1=s[0]-'A'+10;
for(i=1;i<len;i++)
{
if(s[i]>='0'&&s[i]<='9')
shu1=shu1*a+s[i]-'0';
else if(s[i]>='a'&&s[i]<='z')
shu1=shu1*a+s[i]-'a'+10;
else if(s[i]>='A'&&s[i]<='Z')
shu1=shu1*a+s[i]-'A'+10;
}
}
if(b<=10)
{
if(shu1==0)
printf("0\n");
else
{
for(i=0;shu1!=0;i++)
{
c[i]=shu1%b;
shu1=shu1/b;
}
for(j=i-1;j>=0;j--)
{
printf("%d",c[j]);
}
printf("\n");
}
}
else if(b>10)
{
if(shu1==0)
printf("0\n");
else
{
for(i=0;shu1!=0;i++)
{
c[i]=shu1%b;
shu1=shu1/b;
}
for(j=i-1;j>=0;j--)
{
if(c[j]>=10)
printf("%c",'A'+c[j]-10);
else
printf("%d",c[j]);
}
}
printf("\n");
}
return 0;
}
