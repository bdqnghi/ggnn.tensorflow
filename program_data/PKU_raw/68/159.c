int main()
{
	long n,a,b,i,j,k;
	int bool1,bool2;
	scanf("%d",&n);
	for(k=6;k<=n;k=k+2)
	for(a=2;a<=(k/2);a++)
	{
		b=k-a;
		bool1=1;bool2=1;
		for(i=2;i<=sqrt(a);i++)if(a%i==0){bool1=0;break;}
        for(j=2;j<=sqrt(b);j++)if(b%j==0){bool2=0;break;}
		if((bool1==1)&&(bool2==1)){printf("%d=%d+%d\n",k,a,b);break;}
	}
	return 0;
}