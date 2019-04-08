char str2[1000]={0};
void k(char str[])
{char str1[100][20]={{0}};int i=0,j,k,l=0;
for(j=0;str[j]!=0;j++)
{for(i=j,k=0;str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z'||str[i]==39;i++,k++)
str1[l][k]=str[i];
j=i;l++;}
int max,min;
for(i=0,min=0;i<l;i++)
if(strlen(str1[min])>strlen(str1[i]))min=i;
strcpy(str2,str1[min]);
for(i=0,max=0;i<l;i++)
if(strlen(str1[max])<strlen(str1[i]))max=i;
strcpy(str,str1[max]);
}
int main()
{char str[1000]={0};
gets(str);
k(str);
puts(str);
puts(str2);
return 0;}
