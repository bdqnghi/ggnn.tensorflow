void main()
{
	int I,i,n,j,k,s,a,x;
	int p,q;
	scanf("%d",&a);
	for(n=6;n<=a;n=n+2)
	{   x=0;
		s=n/2;
		for(i=3;i<=s;i=i+2)
		{
			p=sqrt(i);
			for(j=2;j<=p;j++)        
			{
				if(i%j==0)  break;   
			}
			I=n-i;
			q=sqrt(I);
			for(k=2;k<=q;k++)
			{
				if(I%k==0)   break;
			}
			if ((j>=p+1)&&(k>=q+1))
			{
				  printf("%d=%d+%d\n",n,i,I);break;
			}
	
		}
	}
}