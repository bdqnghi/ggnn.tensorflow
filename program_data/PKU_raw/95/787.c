void main()
{
char stq[81],str[81];
int i,j,k;
gets(stq);
gets(str);
for(i=0;stq[i]!='\0';i++)
{if((int)stq[i]<96)
stq[i]=stq[i]+32;}

for(k=0;str[k]!='\0';k++)
{if((int)str[k]<96)
str[k]=str[k]+32;}

if(strcmp(stq,str)>0)
printf(">");
else
if(strcmp(stq,str)==0)
printf("=");
else
if(strcmp(stq,str)<0)
printf("<");
}