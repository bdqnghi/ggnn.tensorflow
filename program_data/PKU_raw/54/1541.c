int k,n,t=1;
void mokey(int x)
{
	if(x%(n-1)==0)
	{
	     x=x*n/(n-1);
		 x=x+k;
		 t++;
		 if(t==n)  { cout<<x;  exit(0); } 
		 else   mokey(x);
	}
}
int main ()
{
	int i=0,x;
	cin>>n>>k;
	for(i=1;;i++)
    {	
		t=1;
	   x=n*i+k;
	   mokey(x);
	}
		return 0;
}

 
 
 
