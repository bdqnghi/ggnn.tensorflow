
int main()
{
	struct student{
		long num;
		long chinese;
		long maths;
		long sum;
	}t[100000],l;
	long n,i,j,k,tmp;
	scanf("%ld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%ld %ld %ld",&t[i].num,&t[i].chinese,&t[i].maths);
	}
    for(i=0;i<n;i++)
	{
		t[i].sum=t[i].chinese+t[i].maths;
	}
	for(i=0;i<3;i++)
	{
        k=i;
		for(j=i+1;j<n;j++)
		{
			if(t[j].sum>t[k].sum)
				k=j;
		}
		l=t[k];
                  t[k]=t[i];
                  t[i]=l;
	}
	for(i=0;i<3;i++)
	{
	    printf("%ld %ld\n",t[i].num,t[i].sum);
	}
	return 0;
}