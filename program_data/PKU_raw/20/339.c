void main()
{
int i,j,k,max=0;
char str1[11],substr[4],str2[14],str3[11];
while(scanf("%s %s",str1,substr)!=EOF)
{for(i=0;i<14;i++)
{str2[i]='\0';str3[i]='\0';}
max=0;
for(i=0;str1[i]!='\0';i++)
if(str1[i]>max) {max=str1[i];k=i;}
strncpy(str2,str1,k+1);
strcat(str2,substr);
for(i=k+1,j=0;str1[i]!='\0';i++,j++)
str3[j]=str1[i];
strcat(str2,str3);
printf("%s\n",str2);}
}