
int main(int argc)
{   int i,n,s,a[100];
    cin>>n;        //????n
	i=1;
	while (i<=n)
	{ if (i>=70&&i<80||i%7==0||i%10==7)
	{a[i]=0;}
	else {a[i]=i;}      //??7??????
	i++;}
	i=1;
	s=0;
	while(i<=n)
	{  s=s+a[i]*a[i];
	i++;}        //????
	cout << s;

    
	return 0;
}
