void main()
{
char a[80],b[80];
int i,m,j,k;
gets(a);
gets(b);
for(i=0;(a[i]!='\0');i++)
{
if((a[i]>=97)&&(a[i]<=122))
{
a[i]=a[i]-32;
}
}
for(i=0;(b[i]!='\0');i++)
{
if((b[i]>=97)&&(b[i]<=122))
{
b[i]=b[i]-32;
}
}
if(strcmp(a,b)>0)
printf(">");
if(strcmp(a,b)<0)
printf("<");	
if(strcmp(a,b)==0)
printf("=");
		
}
