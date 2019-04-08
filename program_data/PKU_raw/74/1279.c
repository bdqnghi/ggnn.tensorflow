int main()
{
	int m,n,i,j,r=0,x,y,z,k;
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{ k=(int)(sqrt(i));
	    for(j=2;j<=k;j++)
		{ if(i%j==0)
		     break;
		}
		if(j>k)
		{	x=i;
		    z=i;
			y=0;
		    do{ x=z%10;
				z=z/10;
				
			    y=10*y+x;
			}while(z!=0);
			if(y==i)
			{   r=r+1;
			   if(r==1) printf("%d",y);
               else printf(",%d",y);
			}
		}
		else continue;
	}
	if(r==0)
		printf("no");
	return 0;
}