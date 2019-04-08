void main()
{   int f(int k);/*???????*/
    int g(int k);/*????????*/
	int length(int k);/*????????*/
	int i,m,n,N=0;
	int a[1000];/*????????*/
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
		if(i%2!=0)
		{	if(f(i)&&g(i))
			{N++;
			a[N-1]=i;
			}
		}
		else if(i==2)
			{N++;
			a[N-1]=i;
			}
	if(N==0)
		printf("no\n"); 
	else 
	{
		for(i=0;i<N-1;i++)
			printf("%d,",a[i]);
		printf("%d\n",a[N-1]);
	}
}

int f(int k)
{
	int i,p;
	if(k>=4)
	{
    	p=sqrt(k);
    	for(i=2;i<=p;i++)
		if(k%i==0)
		{
		return 0;break;
		}
		else if(i==p)
			return 1;
	}
    else if(k==3)
		return 1;
	else return 0;
}

int g(int k)
{
	int p,i,q,r;
	if(k>=10)
	{  p=length(k);
	   
	   for(i=1;i<=p/2;i++)
	   {   q=k/pow(10,i-1);
	      r=(int)(k/pow(10,p-i));
		if((q%10)!=r%10)
		{return 0;
		break;
		}
		else if(i==p/2)
			return 1;
	   }
	 }
	else if(k>1)
		return 1;
	else return 0;
}

int length(int k)/*?????????*/
{
	int i,m=1;

	for(i=1;;i++)
		if(k>=pow(10,i))
			m++;
		else break;
	return m;
}



				


