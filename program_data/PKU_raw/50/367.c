int main()
{
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int w,i,j,m,b[11];
	scanf("%d",&w);
	for(i=0; i<12; i++)
	{
	    m=12;
		for(j=0; j<i; j++)
		{
			m+=a[j];
		}
		b[i]=(m%7+w)%7;
		if(b[i]==5)
			printf("%d\n",i+1);

	}
	return 0;
}

			
