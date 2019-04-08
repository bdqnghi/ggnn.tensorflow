int n1[251]={0},n2[251]={0};
char s1[251],s2[251];
void main()
{
scanf("%s",s1);
scanf("%s",s2);
int i,j;
int l=strlen(s1);
j=0;
for(i=l-1;i>=0;i--)
n1[j++]=s1[i]-'0';
l=strlen(s2);
j=0;
for(i=l-1;i>=0;i--)
n2[j++]=s2[i]-'0';
for(i=0;i<250;i++)
{
n1[i]+=n2[i];
if(n1[i]>9)
{n1[i]-=10;n1[i+1]++;}
}
int b=0;
for(i=250;i>=0;i--)
{
if(b)
printf("%d",n1[i]);
else if(n1[i])
{printf("%d",n1[i]);b=1;}
}
if(b==0)
printf("0");
}