void main()
{
	char string[1000]={0};
	char str[100][100]={0};
	char *p;
	char num[100]={0};
p=num;
int i,j,k,n,m;
gets(string);
n=0;k=0;
for(i=0;string[n]!='\0';i++)
{ for(j=0;string[n]!='\0'&&string[n]!=' ';j++)
   {
   str[i][j]=string[n];
   n++;
   }
  str[i][j]='\0';
  n++;
k++;}

m=strlen(str[0]);
p=str[0];
for(i=0;i<k;i++)
  if(m<strlen(str[i]))
  {m=strlen(str[i]);
  p=str[i];}

printf("%s\n",p);

m=strlen(str[0]);
p=str[0];
for(i=0;i<k;i++)
  if(m>strlen(str[i]))
  {m=strlen(str[i]);
  p=str[i];}

printf("%s",p);
}
