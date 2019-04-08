// ????.cpp : Defines the entry point for the console application.
// ?????????
int main()
{
char a[100],b[100];
int p=0,q=0,m,n;
cin>>m>>a>>n;
for(int i=0;i<strlen(a);i++)
{
if(a[i]>='a')
a[i]=a[i]-'a'+10;
else if(a[i]>='A')
a[i]=a[i]-'A'+10;
else
a[i]=a[i]-'0';
p=p*m+a[i];
}
while(p>0)
{
b[q]=p%n;
if(b[q]>=10)
b[q]=b[q]-10+'A';
else
b[q]=b[q]+'0';
p=p/n;
q++;
}
for(int i=q-1;i>=0;i--)
cout<<b[i];
if (q==0) cout<<0;
cout<<endl;
return 0;
}
