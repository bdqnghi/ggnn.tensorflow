int main()
	{int m,i,q,a;
	scanf("%d",&m);
	for(i=3;i<=m/2;i=i+2)
		{a=1;
		for(q=3;q<(m-i)/3;q=q+2)
			{if(i==i/q*q&&i/q!=1){a=0;break;}
			if((m-i)==(m-i)/q*q) {a=0;break;}}
		if (a) printf("%d %d\n",i,m-i);}
	return 0;
}
