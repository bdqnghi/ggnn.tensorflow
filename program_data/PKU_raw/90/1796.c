
int f(int m,int n,int j)
{ 
	int i,s=0;
	if(n==1)
		return m>=j;
	for(i=j;i<m;i++)
		s+=f(m-i,n-1,i);
	return s;
}	
void main() 
{ 
	int n,m,s,i,t;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d%d",&m,&n);
		if(n>m)
			n=m;
		s=f(m,n,0); 
		printf("%d\n",s);
}
}
