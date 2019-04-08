
int main()
{
	int k, yyyy, nn, mm, i, j, c;
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int b[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	int  n, m;
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		scanf("%d%d%d",&yyyy,&nn,&mm);
		if(mm>nn)
		{
           n=mm;
		   m=nn;
		}
		else
		{
			n=nn;m=mm;
		}
		if(yyyy%400==0||(yyyy%100!=0&&yyyy%4==0))
		{ 
			c=0;
          for(j=m;j<n;j++)
		  {
             c=c+b[j-1];
		  }
		  if(c%7==0) printf("YES\n");
		  else printf("NO\n");
		}
		else
		{
          c=0;
          for(j=m;j<n;j++)
		  {
             c=c+a[j-1];
		  }
		  if(c%7==0) printf("YES\n");
		  else printf("NO\n");
		}
	}
	
	return 0;
}

