int main()
{
char z[300];
gets(z);
char zm[30];
int num[26]={0};
int len;
len=strlen(z);
int i,j=0;
for(i=0;i<len;i++)
{
if(z[i]>='a'&&z[i]<='z'){num[z[i]-'a']++;}
}
for(i=0;i<26;i++)
{
if(num[i]!=0){printf("%c=%d\n",i+'a',num[i]);j++;}
}
if(j==0){printf("No");}
return 0;
}
