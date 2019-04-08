int main()
{
	char str[100],str2[100];
gets(str);
int len=strlen(str);
int temp=0;
int i,j=0;
for(i=0;i<len;i++)
{
	if(i==0)
		temp=str[i]-'0';
	else if(i==1&&(temp*10+str[i]-'0')<13)
		temp=(temp*10+str[i]-'0')%13;
	else
	{str2[j]=(temp*10+str[i]-'0')/13+'0';
	temp=(temp*10+str[i]-'0')%13;
	j++;}
}
if(j==0)printf("0\n%d",temp);
else {str2[j]=0; 
printf("%s\n%d",str2,temp);}
return(0);}

