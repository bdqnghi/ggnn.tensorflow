void main()
{
	int i,j,a[8][8],mi,ma,p,q,x,y;
	scanf("%d,%d",&i,&j);
	for(p=0;p<i;p++)
		for(q=0;q<j;q++)
			scanf("%d",&a[p][q]);
    	for(p=0;p<i;p++)
		{
		for(q=0;q<j;q++)
		{
			for(x=0,mi=a[p][q];x<i;x++)
				if(mi>a[x][q])
					mi=a[x][q];
			for(y=0,ma=a[p][q];y<j;y++)
					if(ma<a[p][y])
						ma=a[p][y];
			if((mi==a[p][q])&&(ma==a[p][q])) break;
		}
		
if((mi==a[p][q])&&(ma==a[p][q])) break;
		}
		if(mi==a[p][q]&&ma==a[p][q])
			printf("%d+%d",p,q);
		else
			printf("No\n");
}
