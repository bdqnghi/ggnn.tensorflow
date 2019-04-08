int tru(int c)
{
	int j,p=0;
	if(c==1||c==2)
		return 1;
	else for(j=2;j<=pow((double)c,0.5);j++)
		     if(c%j==0)
			 {
				 p=1;
				 break;
			 }
		  if(p==1) return 0;
		  else return 1;
}
int count(int a,int b)
{
	int i,k=1;
	if(!tru(a))
		for(i=b;i<=pow((double)a,0.5);i++)
			if(a%i==0)
				k=k+count(a/i,i);
	return k;
}
int main()
{
	int n,x[999],q;
	scanf("%d",&n);
	for(q=0;q<n;q++)
		scanf("%d",&x[q]);
	for(q=0;q<n;q++)
		printf("%d\n",count(x[q],2));

	return 0;
}



