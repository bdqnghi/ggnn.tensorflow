void main()
{
char string[30000],c;
int num[300]={0};
int i,n,k=0,j=0,l,word=0;
gets(string);
 
for(i=0;(c=string[i])!='\0';i++)
{
if(c==' ') {word=0;}
else
{
 if(word==0)
{j++;word=1;}
num[j]++;
}
}
for(l=1;l<j;l++)
printf("%d,",num[l]);
printf("%d",num[j]);

}
