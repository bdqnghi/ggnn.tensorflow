int Isprimenumber(unsigned short int a)
{
	unsigned short int b;
    unsigned short int x;
	x=(int)sqrt(a)+1;
	for(unsigned short int i=2;i<=x;i++)
	{
		b=a%i;
		if(b==0) break;
	}
    if(b!=0) return 1;
}




int main()
{
	unsigned short int n;
    scanf("%d",&n);
    for(unsigned short int j=6;j<=n;j++)
	{
		if(j%2!=0) continue;
		else
		{
			unsigned short p;
			unsigned short q;	
	        for(p=3;p<j;p++)
			{
	    		q=j-p;
				if(Isprimenumber(p)==1&&Isprimenumber(q)==1) break;
			}
			printf("%d=%d+%d",j,p,q);
	        printf("\n");
		}
	}
}