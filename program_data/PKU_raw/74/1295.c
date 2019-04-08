
/*?? 
??????? m ?n ??????????????????m ? n?????m ???n???????????????
???????????? no (??????????????????123321?121)?
 
???? 
m ? n ?1??????1??????
 
???? 
?????????????????????????? no
 
???? 
100  200
 
???? 
101,131,151,181,191*/
int main()
{
	long int m,n,i,j,s=0,t,k=0;
	long int a[100000],b[100000];
	long int huiwen(long int d);
	scanf("%ld%ld\n",&m,&n);
	for(i=m;i<=n;i++)
	{
		t=0;
		for(j=1;j<=sqrt(i);j++)
			if(i%j==0)
				t++;
			if(t==1)
				a[s++]=i;
	}
//for(i=0;i<=s-1;i++) printf("%d ",a[i]);
	for(i=0;i<s;i++)
		if(huiwen(a[i]))
			b[k++]=a[i];
	if(k==0)
		printf("no\n");
	else if(k==1)
		printf("%d\n",b[0]);
	else
	{
		printf("%d",b[0]);
		for(i=1;i<=k-1;i++)
			printf(",%d",b[i]);
	}
	return 0;
}

 long int huiwen(long int d)
 {
	int re=0;
	if(d<10)
			re=1;
	else if(d<100)
		{
			if(d/10==d%10)
				re=1;	
		}
	else if(d<1000)
		{
			if(d/100==d%10)
					re=1;
		}
	else if(d<10000) re=0;
	else if(d<100000)
		{
			if((d/10000==d%10)&&((d/1000)%10==(d/10)%10))
					re=1;
		}
	else if(d<1000000) re=0;
	
	else if(d<10000000)
		{
			if((d/1000000==d%10)&&((d/100000)%10==(d/10)%10)&&((d/10000)%10==(d/100)%10))
					re=1;
		}
	else if(d<100000000) re=0;
		
	else if(d<1000000000)
		{
			if(d/100000000==d%10&&((d/10000000)%10==(d/10)%10)&&((d/1000000)%10==(d/100)%10)&&(((d/100000)%10)==((d/1000)%10)))
				re=1;	
		}
	else 
		re=0;
		return re;
	}

