int main()
{
int tas,task,n,i,mark[100],l,flag;
char s[10000];
scanf("%d",&task);
for(tas=1;tas<=task;tas++)
{
scanf("%s",&s);
flag=0;
l=strlen(s);
for(i=0;i<=27;i++) 
 mark[i]=0;
for(i=0;i<l;i++)
 mark[s[i]-'a'+1]++;
for(i=0;i<l;i++)
 if(mark[s[i]-'a'+1]==1){printf("%c\n",s[i]);flag=1;break;}
if(flag==0) printf("no\n");
}
}