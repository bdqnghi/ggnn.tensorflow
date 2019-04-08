




int n,k,ini;



int main()
{
 int n,k,ini;
 int i,j;
 int apple[1001];
 memset(apple,0,sizeof(apple));

 cin>>n>>k;
 ini=n-1;
 apple[n]=n-1;
for(i=n;i>=1;i--)
{
	if(apple[i]%(n-1)==0)
	{
	apple[i-1]=apple[i]*n/(n-1)+k;
	}
	else
	{
		apple[n]+=n-1;
		i=n+1;
	}
}

cout<<apple[0]<<endl;


 

 

  return 0;

}





