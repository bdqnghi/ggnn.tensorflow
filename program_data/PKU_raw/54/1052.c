int m(int n,int k) 
{ 
	int i,x=1,s=n*x+k; 
	for(i=0;i<n-1;i++) 
	{ 
		if((n*s)%(n-1)==0)
		{ 
			s=k+(n*s)/(n-1); 
		} 
		else 
		{ 
			i=-1; 
			x++; 
			s=n*x+k; 
		} 
	} 
	return s; 
} 
void main() 
{ 
	int n,k; 
	scanf("%d%d",&n,&k);
	printf("%d",m(n,k));
}
