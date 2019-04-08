int show(char a[],int t)
{int i,k,l,j=1;
static int b[101];
puts(a);
for(i=0;i<=t-1;i++)
switch(a[i])
{case '(':a[i]=' ';
          b[j]=i+1;
		  j++;
		  break;
case ')':a[i]=' ';
          b[j]=-(i+1);
		  j++;
		  break;
default: a[i]=' ';
}
j--;
do
{
l=0;
for(k=1;k<=j-1;k++)
if(b[k]>0)
{for(i=k+1;i<=j;i++)
if(b[i]!=0)
break;
if(b[k]*b[i]<0)
{b[k]=0;b[i]=0;l++;}}
}
while(l>0);
for(i=1;i<=j;i++)
{if(b[i]<0)
a[-b[i]-1]='?';
else if(b[i]>0)
a[b[i]-1]='$';
}
puts(a);
return 0;
}
int main()
{int i,n;
scanf("%d\n",&n);
for(i=1;i<=n;i++)
{char a[101];int t;
gets(a);
t=strlen(a);
show(a,t);}
return 0;}