int main()
{
	int n,i,j,k,a1,a2,a3,b;
	scanf("%d",&n);
	a1=(int)(n/2);
	for(i=6;i<=n;i+=2)
	{
		for(j=3;j<=a1;j++)
		{
			if(j%2==0)
				goto loap;
			if(j%2!=0)
			{
				a2=(int)(sqrt)(j);
				for(k=3;k<=a2;k++)
					if(j%k==0)
						goto loap;
			}
		b=i-j;
		a3=(int)(sqrt)(b);
		if(b%2==0)
			goto loap;
		else
		{
			for(k=3;k<=a3;k++)
				if(b%k==0)
					goto loap;
		}
		printf("%d=%d+%d\n",i,j,b);
		break;
loap:;
		}
	}
	return 0;
}







