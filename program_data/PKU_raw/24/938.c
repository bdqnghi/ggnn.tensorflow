int main(){
char str[500];
int i,j,longest=0,shortest=20,lenth,k=-1,a,b,c,d;
gets(str);
for(i=0;str[i]!='\0';i++)
{if(str[i]==' ')
{lenth=i-k;
if(lenth>longest)
{longest=lenth;
a=i;
b=k;}
if(lenth<shortest)
{shortest=lenth;
c=i;
d=k;}
k=i;}}
if(str[i]=='\0')
{lenth=i-k;
if(lenth>longest)
{longest=lenth;
a=i;
b=k;}
if(lenth<shortest)
{shortest=lenth;
c=i;
d=k;}
}
for(j=b+1;j<a;j++){
printf("%c",str[j]);}
printf("\n");
for(j=d+1;j<c;j++){
printf("%c",str[j]);}
return 0;
}
