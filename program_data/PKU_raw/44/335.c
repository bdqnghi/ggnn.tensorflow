int transfer(int i)
	{
		int b=0,t,r;
		b+=i%10;
		for(r=0;r<5;r++)
		{
			i/=10;
			if(i!=0)
			b=(b*10)+i%10;
			else break;
			}
		return b;
		}
int main()
		{
			int i,j,n=6;
			while(n>0)
			{
				scanf("%d",&i);
				printf("%d\n",transfer(i));				
				n--;
				}
			return 0;
		
			}