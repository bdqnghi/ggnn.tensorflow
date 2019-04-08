int main()
{
	int m,a,b,i,j,i_limit_a,j_limit_b,bool_a,bool_b;
	scanf("%d",&m);
	for (a=3;a<=(m/2);a=a+2)
	{
		i_limit_a=sqrt(a);
		bool_a=1;
		for (i=3;i<=i_limit_a;i=i+2)
			if (a%i==0) {bool_a=0;break;}
	    if (bool_a)
		{
			b=m-a;
			bool_b=1;
            j_limit_b=sqrt(b);
			for (j=3;j<=j_limit_b;j=j+2)
				if (b%j==0) {bool_b=0;break;}
            if (bool_b) printf("%d %d\n",a,b);
		}
	}
	return 0;
}