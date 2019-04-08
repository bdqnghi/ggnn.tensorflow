int main()
{
int n,i=0,num;
int feibo[21]={1,1,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,2584,4181,6765};
cin>>n;
while(i<n)
{
cin>>num;
cout<<feibo[num]<<endl;
i++;
}
return 0;
}