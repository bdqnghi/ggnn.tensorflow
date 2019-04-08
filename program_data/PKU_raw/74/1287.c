void main()
{
	int sushu(long k);
	int hui(long j);
	long n,m,i,t=0;
	scanf("%ld%ld",&m,&n);
	for(i=m;i<=n;i++)
	{if(sushu(i)==1&&hui(i)==1)
	{ t++;
	if(t==1) printf("%ld",i);
	else if(t>1) printf(",%ld",i);
	}
	}
	if(t==0) printf("no\n");
}

int sushu(long k)
{ long x;
 for(x=2;x<k/2;x++)
 { if(k%x==0){ return(0); break;}}
 if(x==k/2)  return(1);
}

int hui(long j)
{long p=0,temp,a;
temp=j;
while(temp>0)
{a=temp%10;
p=p*10+a;
temp/=10;
}
if(p==j) return(1);
else return(0);
}