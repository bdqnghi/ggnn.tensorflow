int main()
{
char str1[100],str2[100];
int len,i,t=1;
gets(str1);
len=strlen(str1);
str2[0]=str1[0]; 
for(i=1;i<len;i++){
if(str1[i]!=' '||str1[i-1]!=' '){
str2[t]=str1[i];
t++;
}
}
str2[t]='\0';
puts(str2);
return 0;
}
