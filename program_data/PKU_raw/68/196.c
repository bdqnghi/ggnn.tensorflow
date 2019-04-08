

int main(int argc, char* argv[])
{
	int i,p;
	int x,n;
	int f,g;
	int primep,primeq;
	scanf("%d",&x);
	
	for(n=6;n<=x;n++)
	{
		if(n%2==0)
		{
		  for(p=2;p<n;p++)
		  {
			primep=1;
			f=sqrt(p);
			for(i=2;i<=f;i++)
			{if(p%i==0){primep=0;break;}}
			if(primep!=0)
			{
				primeq=1;
				g=sqrt(n-p);
				for(i=2;i<=g;i++)
				{if((n-p)%i==0){primeq=0;break;}}
				if(primeq!=0&&(n-p)>1&&p<=(n-p)){printf("%d=%d+%d\n",n,p,n-p);break;}
		
			}
		  }
		}
	}
	return 0;
}

