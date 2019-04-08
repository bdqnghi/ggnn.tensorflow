void ysfwt(int n,int m)
{ 
	int i,s=0;  
	for(i=2;i<=n;i++) s=(s+m)%i; 
    printf("%d\n",s+1);
}
void main()
{
	int j,n,m;
	for(j=0;;j++)
	{scanf("%d %d",&n,&m);
	if(m!=0&&n!=0) ysfwt(n,m);
	else break;}
}


