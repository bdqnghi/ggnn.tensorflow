	
int king(int n,int m)
{
	int num,k,i,j,total=0;
	int a[300];
	
	for(i=1;i<=n;i++)
		a[i]=i;
    for(j=1;;j++)
	{
			k=j;
	
		num=0;
		do
		{
			
			if(j%n!=0)
			{
	           if(a[j%n]!=0)
				num++;
			}
			else
			{
				if(a[n]!=0)
					num++;
			}
		    if(num<m) 
				j++;
		}while(num<m);
		if(j%n!=0)
		
		{
			a[j%n]=0;total++;
		}
		else
		{
			a[n]=0;total++;
		}
	if(total==n) break;
	}
	if(j%n!=0)
        return(j%n);
	else
	    return(n);
}
void main()
{
	int l,n,m,c[20],s;
	for(l=0;;l++)
	{
		scanf("%d %d",&n,&m);
	
		if(n==0) {s=l;c[l]=0;break;}
		c[l]=king(n,m);
		
		
	}
	l=0;
	for(l=0;l<s;l++)
	{
	
		printf("%d\n",c[l]);
	}
	
	
	
	
}