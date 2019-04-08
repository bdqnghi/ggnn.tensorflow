int main()
{
int n,a;//????
cin>>n;//??
int value[100];//????
for (a=1;a<=n;a=a+1){
cin>>value[a];
}
for(a=n;a>1;a=a-1){
	cout<<value[a]<<' ';
}
cout<<value[1];
return 0;
}