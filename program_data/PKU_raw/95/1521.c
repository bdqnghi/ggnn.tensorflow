main()
{char str1[10000],str2[10000];
int i;
gets(str1);
gets(str2);
for(i=0;str1[i]!='\0';i++)
if((str1[i]>='a')&&(str1[i]<='z'))
str1[i]=str1[i]-'a'+'A';
for(i=0;str2[i]!='\0';i++)
if((str2[i]>='a')&&(str2[i]<='z'))
str2[i]=str2[i]-'a'+'A';
if(strcmp(str1,str2)>0)
printf(">");
else 
if(strcmp(str1,str2)<0)
printf("<");
else
printf("=");}
