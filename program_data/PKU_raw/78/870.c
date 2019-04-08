int main()
{char str[4];
str[0]='z';str[1]='q';str[2]='s';str[3]='l';
int a=0,b=0,c=0,d=0;
for(a=1;a<=5;a++)
for(b=1;b<=5;b++)
for(c=1;c<=5;c++)
for(d=1;d<=5;d++)
if(a+b==c+d&&a+d>b+c&&a+c<b&&a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d)
{int s[4]={a,b,c,d};
int i=0,j=0;
for(i=0;i<=2;i++)
for(j=i+1;j<=3;j++)
{if(s[i]<s[j])
{int x=0;
char y;
x=s[i];s[i]=s[j];s[j]=x;
 y=str[i];str[i]=str[j];str[j]=y;}
}
int k=0;
for(k=0;k<=3;k++)
cout<<str[k]<<" "<<10*s[k]<<endl;}
cout<<endl;

	return 0;
}

