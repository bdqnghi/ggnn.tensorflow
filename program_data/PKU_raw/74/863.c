void main()
{
	int a,b,i,j;
	int m,n,temp;
	int x,flag,y=0;
	scanf("%d %d",&m,&n);
	flag=0;
	for(i=m;i<=n;i++)    /*??????a??????????,???????b?!!*/
	{
		a=i;
		b=0;
	    for(j=1;a!=0;j++)
		{
			temp=b;	
	        b=a%10;
		    b=10*temp+b;
			a=a/10;
		}
		if(b==i)
		{
			for(x=2;x<=b;x++)
			{
				if(b%x==0)break;
			}
			if(x==i)
			{
			    if(y>0)
			    printf(",");	
			    printf("%d",b);
			    flag=1;
				y++;
				
			}
		}
	}
	if(flag==0)
		printf("no\n");
}