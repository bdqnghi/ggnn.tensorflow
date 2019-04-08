int main()

{
char a[1000],b[1000]={1},c[1000]={0};
scanf("%s",a);
for(int w=0;a[w]!='0';w++)
{
    if((a[w]>='a')&&(a[w]<='z'))
    a[w]=a[w]-'a'+'A';
    else a[w]=a[w];}
int j=0;
c[0]=a[0];
for(int i=0;a[i]!='\0';i++)
{
if(a[i]==a[i+1])
{
b[j]=b[j]+1;}
else {c[j]=a[i];
j++;
b[j]=1;
}}
for(int k=0;c[k]!='\0';k++)
printf("(%c,%d)",c[k],b[k]);}
