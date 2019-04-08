
int main()
{
char s[100];
char a[100];
char b[100];
int i,j,len;
gets(s);
gets(a);
gets(b);
len=strlen(s);
int n=0;
int word=0;
for(i=0;i<len;i++)
{
if(s[i]==' ') 
{
word=0;
}
else if(word==0)
{
word=1;
n++;
}
}
int A=0;
int l=0;
int k;
char x[100];
for(j=0;j<n;j++)
{ 
for(i=A,k=0;i<len;i++,k++) 
{
if(s[i]!=' ')
{
x[k]=s[i];
}
if(s[i]==' ')
{
x[k]='\0';
A=i+1;
break;
}
}
if( i==len ) x[k]='\0';  
if(strcmp(x,a)==0)
{
strcpy(x,b);
}
printf("%s",x);
l++;
if(l!=n)
{
printf(" ");
}
}

return 0;
} 

