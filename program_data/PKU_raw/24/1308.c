int main()
{
char m[1000];
int i,t[1000]={0},k,l,n=0 ,num1[100]={0},num2[100]={0},max,min,z1=0,z2=0;
gets(m);
k=-1;
for(i=0;i<=strlen(m);i++)
{ 
l=i;
if(m[i]==' '||m[i]=='\0')
{t[n]=l-k-1;
num2[n]=l;
num1[n]=k;
k=i;
n++;}
  }
max=t[0];min=t[0];
for(i=0;t[i]!=0;i++)
{if(t[i]>max)
{   max=t[i];
z1=i;}
if(t[i]<min)
{min=t[i];
z2=i;}
}
for(i=num1[z1]+1;i<num2[z1];i++)
{printf("%c",m[i]);}
printf("\n");
for(i=num1[z2]+1;i<num2[z2];i++)
printf("%c",m[i]);

return 0;
}