int main()
{int n,t=0,i;//????n,t,i,??t????0
cin>>n;
while(n!=1)
{if(n%2==0)
{i=n/2;
printf("%d/2=%d\n",n,i);}
else {i=n*3+1;
printf("%d*3+1=%d\n",n,i);}
n=i;
}
cout<<"End"<<endl;
return 0;
}