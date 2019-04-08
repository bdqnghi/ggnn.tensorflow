main()
{
const int last=1000;
char s[1050];
scanf("%s",s);
int num[1050];
int len=strlen(s);
int i;
i=last+1;
for (int j=len-1;j>=0;j--)
{i--;
num[i]=(s[j]-'0');}
int st=i;
num[last+1]=0;
while (i<=last)
{
num[i+1]+=num[i]%13*10;
num[i]=num[i]/13;
i++;
}
while (num[st]==0) st++;
if (st>last) printf("0");
for (i=st;i<=last;i++) 
printf("%c",num[i]+'0');
printf("\n");
printf("%d",num[last+1]/10);
}
