int main(int argc, char* argv[])
{
	int n,i,a,b,c=0,d;
	scanf("%d",&n);
	for(i=6;i<=n;i=i+2)
	{
		for(a=2;a<=(i/2);a++)
		{
			c=0;
			for(b=2;b<=(sqrt(a));b++)
			{
				if(a%b!=0)
					c=c;
				else
				{c++;
				break;}
			}
             d=i-a;
			for(b=2;b<=(sqrt(d));b++)
			{
				if(d%b!=0)
					c=c;
				else
				{c++;
				break;}
			}
			
			if(c==0)
			{
				printf("%d=%d+%d\n",i,a,d);
			    break;
			}
			
		}
	}
	return 0;
}

