

int main()
{
int i, n,N;
char a[100]={0},b[100]={0};
char *p=NULL;
while(cin>>a>>b)
{
	n=strlen(a);
	N=a[0];
for(i=0;i<n;i++)
{
	
  if(a[i]>N)
  { 
   N=a[i];
   p=&a[i]; 
  }
  
}

for(i=0;i<n;i++)
{
cout<<a[i];
if(&a[i]==p)
cout<<b;
}
for(i=0;i<n;i++)
a[i]=0;
for(i=0;i<strlen(b);i++)
b[i]=0;
cout<<endl;
}

return 0;
}

