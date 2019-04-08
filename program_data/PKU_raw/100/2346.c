int main()
{
char str[300];
char temp='\0';
int i,j,l=1,k=0,sum=0,n;
gets(str);
n=strlen(str);
for(i=1;i<n;i++)
{
	for(j=0;j<n-i;j++)
	if(str[j]>str[j+1])
	{
		temp=str[j];
		str[j]=str[j+1];
		str[j+1]=temp;
	}
}
temp='\0';
for(i=0;i<300;i++)
{
if(str[i]=='\0')
{
break;
}
else if((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122))
{
for(j=i+1;j<300;j++)
{
if(str[j]=='\0')
{
break;
}
else if(str[j]==str[i])
{
l=l+1;
temp=str[j];
}
}
printf("%c=%d\n",str[i],l);
i=i+l-1;
l=1;
}
}
if(temp=='\0')
{
	printf("No\n");
}
}