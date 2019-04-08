int l;
struct stu
{int num;
int sex;}a[100];
int main()
{char s[101],p;
int i,j,L,k;
scanf("%s",s);
l=strlen(s);
p=s[0];
for(i=0;i<l;i++)
{if(s[i]==p)
a[i].sex=1;
else
	a[i].sex=2;
a[i].num=i;}
L=l/2;
for(i=0;i<L;i++)
{for(j=0;j<l;j++)
{k=j+1;
while(a[k].sex==0)
{k++;}
	if(a[j].sex==1&&a[k].sex==2)
{printf("%d %d\n",a[j].num,a[k].num);
a[j].sex=a[k].sex=0;
break;}}}}
