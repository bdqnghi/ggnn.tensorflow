void main()
{
	int a,b,i,j,flag1=0,flag2=0,k,n,count=0,q,s,d,w,num=0;
	scanf("%d%d",&a,&b);
		for(i=a;i<=b;i++)
		{
			for(j=2;j<(i/2);j++)
			{
				if(i%j==0)
					flag1++;
			}
			if(flag1!=0)
			{flag1=0;
			continue;}
			else 
			{
				
				for(k=1;k<100;k++)
				{
					if(i>=pow(10,k-1)&&i<pow(10,k))
					{n=k;
					break;
					}
				}
				w=i;
				
				for(q=0;q<k/2;q++)
				{
					d=w%10;
					s=w/pow(10,n-1);
				
					if(d==s)
					{
						w=(w-d-s*pow(10,n-1))/10;
						n=n-2;
					}
					else flag2++;
				}
				if(flag2==0)
				{
					if(num==0)
					{
					printf("%d",i);
					}
					else
						printf(",%d",i);
					num++;
				}
				flag2=0;
			}
		}
		if(num==0)
			printf("no");
}