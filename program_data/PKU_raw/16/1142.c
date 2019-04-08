int main()
{
int n,a[5],i,m;
cin>>n;
a[0]=n%10;
a[1]=(n/10)%10;
a[2]=(n/100)%10;
a[3]=(n/1000)%10;
a[4]=(n/10000)%10;

if (n==0)                                 //????0,if?????,????==
{
	cout<<0;
}
else
{
	i=4;
while(a[i]==0)                            //do-while???????
{
m=i;
i--;
}
for(i=0;i<m;i++)
cout<<a[i];
}
return 0;
}
