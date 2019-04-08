int main()
{
char ch[1010]={'\0'};
cin.getline(ch,1002);
int i,j=0,len;
len=strlen(ch);
for(i=0;i<len;i++)
{
while(1)
{
if(ch[j]==ch[i]||ch[j]-ch[i]==32||-ch[j]+ch[i]==32)
j++;
else break;
}
cout<<'(';
if(ch[i]>='a')
cout<<(char)(ch[i]-32);
else
cout<<ch[i];
cout<<','<<j-i<<')';
i=j-1;
}
return 0;
}