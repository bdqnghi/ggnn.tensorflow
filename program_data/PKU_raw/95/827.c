
int main()
{
char s1[80],s2[80];
int i,p=0,a,b;
gets(s1);
gets(s2);
a=strlen(s1);
b=strlen(s2);
for(i=0;i<80;i++)
{if(s1[i]>=65&&s1[i]<=90) s1[i]=s1[i]+32;}
for(i=0;i<80;i++)
{if(s2[i]>=65&&s2[i]<=90) s2[i]=s2[i]+32;}

for(i=0;i<a;i++)
{
if(s1[i]>s2[i]){p=1; break;}
if(s1[i]<s2[i]){p=2; break;}

}

if(p==1) printf(">");
if(p==2) printf("<");
if(p==0) printf("=");
}