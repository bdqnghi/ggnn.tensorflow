void main()
{
	int s[1000];
	int m,n,i,j,t,a,b,c,k,h=0;
	scanf("%d%d",&m,&n);
	a=m;
	for(i=0;i<=(n-m);i++,a++)
	{
		t=sqrt(a);k=1;b=0;
		for(j=2;j<=t;j++)
			if(a%j==0)
			{
				k=0;break;
			}
			if(k==1)
			{
				for(c=a;c>=1;c=c/10)
					b=b*10+c%10;
				if(a==b)
				{
					s[h]=a;
					h++;
				}
			}
	}
	if(h==0)
		printf("no");
	else
		for(i=0;i<h;i++)
		{
			printf("%d",s[i]);
			if(i<h-1)
				printf(",");
		}
}