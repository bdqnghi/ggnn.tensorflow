int sushu(int a)
{
	if(a>2&&a%2==0)return 0;
	else{
			if(a==2)return 1;
			else
				{	
					for(int i=3;i<sqrt(a)+1;i=i+2)
						if(a%i==0)return 0;
					
				}
	}
	return 1;
    
}
int main()
{
	int a,b,c,d,i,t,m;
	scanf("%d",&c);
	for(m=6;m<=c;m=m+2)
		{d=0;
		for(i=3;i<=m/2;i=i+2)
			{t=m-i;
				if(sushu(i)!=0&&sushu(t)!=0)
				{
				printf("%d=%d+%d\n",m,i,t);
				break;
	
				}
				
			}
		}

}
