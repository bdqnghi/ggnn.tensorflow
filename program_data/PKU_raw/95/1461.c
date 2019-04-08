int main()
{
char s1[80],s2[80];
int i,j=0;
gets(s1);

gets(s2);
for(i=0;i<80;i++)
{
if(s1[i]=='\0'||s2[i]=='\0') break;
if((s1[i]<=122)&&(s1[i]>=97)&&(s2[i]<=90)&&(s2[i]>=65)) s1[i]=s1[i]-32;
if((s2[i]<=122)&&(s2[i]>=97)&&(s1[i]<=90)&&(s1[i]>=65)) s2[i]=s2[i]-32;
if(s1[i]==s2[i]) continue;
else if(s1[i]>s2[i]) {printf(">");j=1;break;}
else {printf("<");j=1;break;}
}
if(j==0) printf("=");
return 0;
}