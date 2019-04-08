int main()
{
char m[350],n[350];
int i,t=0,j,k=1,h,a,b;
gets(m);
for(i=0;i<strlen(m);i++)
{if((int)m[i]<123&&(int)m[i]>96)
{n[t]=m[i];
t++;}}
for(a=t-1;a>0;a--)
{
for(b=0;b<a;b++)
if(n[b]>n[b+1])
{int temp;
temp=n[b];
n[b]=n[b+1];
n[b+1]=temp;
}
}

if(t!=0)
{for(i=0;i<t;i++)
{   for(j=i+1;j<t;j++)
{
     if(n[i]==n[j]&&n[i]!='0')
	 { k++;
	 n[j]='0';}
}
if(n[i]!='0')
{printf("%c=%d\n",n[i],k);}
k=1;
}}
else 
printf("No");
return 0;
}