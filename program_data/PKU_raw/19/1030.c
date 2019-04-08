int main()
{
char str[100],str1[100],str2[100];
gets(str);
gets(str1);
gets(str2);
int len=strlen(str);
char**temp=(char**)malloc(len*sizeof(int*));
int i,j=0,k=0;
for(i=0;i<len;i++)
temp[i]=(char*)malloc(len*sizeof(int));
for(i=0;i<len;i++)
	{
	if(i==len-1)temp[j][k+1]=0;
	if(str[i]!=' ')
	{temp[j][k]=str[i];
	k++;}
	else {temp[j][k]=0;j++;k=0;}
	}
for(i=0;i<=j;i++)
{if(strcmp(temp[i],str1)==0)
strcpy(temp[i],str2);}

for(i=0;i<=j-1;i++)
{printf("%s",temp[i]);
printf(" ");}

printf("%s",temp[j]);

for(i=0;i<len;i++)
free(temp[i]);
free(temp);
return(0);
}