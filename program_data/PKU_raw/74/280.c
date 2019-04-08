void main()
{
	int m,n,i,j,x,y,flag=1;
	char a[7];
	scanf("%d %d",&m,&n);
	for(i=m;i<=n;i++)
	{
		if (i==1) continue;
		else 
		{
			for(j=2;j<=sqrt(i);j++)
			{
				if(i%j==0) break;
			}
			if (j>sqrt(i))
			{
				x=(int)(log10(i)+1);
				for(y=0;y<x;y++)
					a[y]=((i%(int)pow(10,y+1))-(i%(int)pow(10,y+1))%(int)pow(10,y))/(int)pow(10,y);	
				for(j=0;j<(x-1)/2.0;j++)
					if(a[j]!=a[x-1-j]) break;
				if (j>=(x-1)/2.0)
				{
					if (flag==1) flag=0;
					else printf(",");
					printf("%d",i);
				}
			}
		}
	}
	if (flag==1) printf("no");
}