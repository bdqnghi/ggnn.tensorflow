int putapple(int p,int q);
int main()
{
	int n,m,a,i,j;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		scanf("%d%d",&m,&n);
		printf("%d\n",putapple(m,n));
	}
}
int putapple(int p,int q)
{   
	if (((q<=0)||(p<0))||((q<0)&&(p==0)))
		return 0;
	else
	  if ((q==1)||((p==0)&&(q>=0)))
	  {
		return 1;
	  }
	  else
	  { 
		return putapple(p,q-1)+putapple(p-q,q);
	  }
}
