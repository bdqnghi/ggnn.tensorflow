main()
{
int i,j,k,m,n;
int n1,n2;
int a[1000];
unsigned long int sum=0,t=1;
char s[500];
scanf("%d %s %d",&n1,s,&n2);
n=strlen(s);
for(i=n-1;i>=0;i--)
{
                   if(s[i]<='Z'&&s[i]>='A')
                   s[i]=s[i]-'A'+10;
                   if(s[i]<='z'&&s[i]>='a')
                   s[i]=s[i]-'a'+10;
                   if(s[i]>='0'&&s[i]<='9')
                   s[i]=s[i]-'0';
                   sum=sum+s[i]*t;
                   if(i==0)
                   break;
                   t=t*n1;                   }
if(sum==0)
printf("0");
else{
i=0;
while(sum!=0)
{
                k=sum%n2;
                a[i]=k;
                i++;
                sum=sum/n2;
                }
i=i-1;
for(j=i;j>=0;j--)
{
                 if(a[j]>=10)
                 printf("%c",a[j]+'A'-10);
                 else
                 printf("%d",a[j]);
                 }}
}
