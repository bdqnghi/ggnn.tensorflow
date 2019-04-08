int locate(char str[],int len)
{
int i,a,b;
a=str[0];
b=0;
for(i=1;i<len;i++)
{
	if(a<str[i]) 
		{
			b=i;
	        a=str[i];
	    }
}
return (b+1);
}
main()
{
int i,a,len,lena;
char str[11],substr[4],result[14];
while (scanf("%s%s",str,substr)!=EOF)
{
len=strlen(substr);
lena=strlen(str);
a=locate(str,lena);
for(i=0;i<a;i++)
	result[i]=str[i];
for(i=a;i<len+a;i++)
	result[i]=substr[i-a];
for(i=len+a;i<len+lena;i++)
	result[i]=str[i-len];
result[len+lena]='\0';
puts(result);
}
}