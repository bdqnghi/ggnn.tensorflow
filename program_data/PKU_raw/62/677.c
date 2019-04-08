int main(){
int n,i,j=0,k,l;
char s[1000];
gets(s);
for(l=0;l<100;l++)
{
for(j=0;s[j]!='\0';j++)
{
if(s[j]==' '&&s[j+1]==' ')
{
for(i=j+1;s[i]!='\0';i++)
{
s[i]=s[i+1];
}
break;
}
}
}
printf("%s",s);
return 0;
}