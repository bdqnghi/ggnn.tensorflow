int main()
{int x,y,i,t,j;
cin>>x>>y;
int a[100],b[100];
t=x;
a[0]=x;
for(i=1;t/2>0;i++)
	{a[i]=t/2;t=t/2;}
     a[i]=1;
     t=y;
     b[0]=y;
for(j=1;t/2>0;j++)
    {b[j]=t/2;t=t/2;}
     b[j]=1;
for(;;)
{if(i==-1)
	{cout<<a[0];break;}
 if(j==-1)
	 {cout<<b[0];break;}
if(a[i]!=b[j])
{cout<<a[i+1]<<endl;break;}
else {i--;j--;}}
	return 0;}