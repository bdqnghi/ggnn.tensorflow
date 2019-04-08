void main()
{long int num=0;
char s[50],t[50];
int a,b,i,x=0,j;
scanf("%d",&a);
scanf("%s",s);
scanf("%d",&b);
for(i=0;s[i]!='\0';i++)
{if(s[i]>='a'&&s[i]<='z')s[i]=s[i]-'a'+10;
else if(s[i]>='A'&&s[i]<='Z')s[i]=s[i]-'A'+10;
else if(s[i]>='0'&&s[i]<='9')s[i]=s[i]-'0';}
for(i=0;s[i]!='\0';i++)
num=num*a+s[i];
for(i=49;i>=0;i--)
{t[i]=num%b;
num=num/b;}
i=0;
while(x==0)
{if(t[i]==0)i++;
else x++;
if (i==50){printf("0");x++;}}
for(j=i;j<=49;j++)
{if(t[j]>=10&&t[j]<=35)
t[j]=t[j]+'A'-10;
else t[j]=t[j]+'0';
printf("%c",t[j]);}

}