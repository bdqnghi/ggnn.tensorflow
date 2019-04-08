int main()
{int n;
cin>>n;
int i;
int sum=0;
for (i=1;i<=n;i++)
{if (69<i&&i<80)
sum=sum;
else if(i%10==7)
	sum=sum;
else if(i%7==0)
	sum=sum;
else sum=sum+i*i;
}
cout<<sum<<endl;
return 0;
}