int main()
{
	int a,i,j,n,m;
	scanf("%d",&a);
	for(i=3;i<a/2+1;i=i+2)
	{
		j=a-i;
			for(n=3;n<i;n=n+2)
			{
				if(i%n==0)
				{
					goto loop;
				}    
			}
			for(m=3;m<j;m=m+2)
			{
				if(j%m==0)
				{
					goto loop;
				}
			}
			printf("%d %d\n",i,j);
	loop: continue;
	}
	return 0;
} 