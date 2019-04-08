int f(int a,int b)
{
	int aa,ac=0,bb,bc=0,kk;
     for(aa=2;aa<a;aa++)
	 {
		 if(a%aa!=0)
			 ac=ac+1;
	 }
	 for(bb=2;bb<b;bb++)
	 {
		 if(b%bb!=0)
			 bc=bc+1;
	 }
	 if(ac==a-2&&bc==b-2)
		 kk=1;
	 else kk=0;
	 return kk;

}
void main()
{
	int n,i,k;
	scanf("%d",&n);
	if(n<5)
	{
		printf("empty");
	}
	else if(n>=5)
	{
	for(i=3;i<n;i++)
	{
      k=f(i,i+2);
	  if(k==1)
		printf("%d %d\n",i,i+2);
	}
	
	}
}