
int main()
{
	int a,b,c,d,e,f,sum=0;
	for(;;)
	{
		a=b=c=d=e=f=sum=0;
		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		if(a==0&&b==0&&c==0&d==0&&e==0&&f==0)
			break;
			d+=12;
		if(f>=c)
			sum+=f-c;
		else
		{
			sum+=f+60-c;
			e-=1;
		}
		if(e>=b)
			sum+=60*(e-b);
		else
		{
			sum+=60*(e+60-b);
			d-=1;
		}
		sum+=3600*(d-a);
		printf("%d\n",sum);
	}


		
		return 0;

	}

