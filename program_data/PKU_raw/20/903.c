int main()
{
    char str[11],substr[4];
while(cin>>str>>substr)
{
char a[14];
int len_a=strlen(str),len_b=strlen(substr),i,j;
char max=0;
for(i=0;i<len_a;i++)//?????
{
if(str[i]>max)  max=str[i];
else  continue;
}
for(i=0;i<len_a;i++)
{
if(str[i]==max)
{
if(i==len_a-1)//????????????,????????,?????
{
for(j=len_a;j<=len_a+len_b;j++)
str[j]=substr[j-len_a];
}
else
{
for(j=0;j<len_a-i-1;j++)
a[j]=str[j+i+1];
for(j=i+1;j<i+len_b+1;j++)
str[j]=substr[j-i-1];
for(j=i+len_b+1;j<len_a+len_b;j++)
str[j]=a[j-i-len_b-1];
str[j]='\0';
}
break;
}
else continue;
}
cout<<str<<endl;}
return 0;
}