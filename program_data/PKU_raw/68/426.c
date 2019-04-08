
void main()
{ int su(int k);
  int n,i,j,p,q;
  scanf("%d",&n);
  for(i=6;i<=n;i+=2)
  {
  	for(j=3;j<=i/2;j+=2)
  	{
  		p=su(j);
  		q=su(i-j);
  		if(p&&q) {printf("%d=%d+%d\n",i,j,i-j);break;}
  		
  		}
  	
  	
  	}  
}
int su(int k)
{
	int m,t=1;
	for(m=2;m<=sqrt(k);m++)
	{
		if(k%m==0) {t=0;break;}
		
	}
	return (t);
	}