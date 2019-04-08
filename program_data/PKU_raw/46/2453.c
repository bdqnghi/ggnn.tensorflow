	int main(){
	
		int a,b,n=0,q,i,k,m,o;
		int sz[100][100];
		scanf("%d",&a);
		scanf("%d",&b);
		o=0;
		int x=0;
		m=a*b;
		for(i=0;i<a;i++)
		{
			for(k=0;k<b;k++)
			{
				scanf("%d",&sz[i][k]);
			}
		}
	if(a%2!=0)
		{
			q=a+1;
			
		}
		while(1)
		{
			if(b-2*n>0)
			{
			for(k=n;k<b-n;k++)
			{
					printf("%d\n",sz[n][k]);
			}
			}
			if(b-2*n<=0)
			{
				break;
			}
			n++;
			if(a-2*n>=0)
			{
			for(k=n;k<=a-n;k++)
			{
					printf("%d\n",sz[k][b-n]);
			}
			}
			
			if(a-2*n<0)
			{
				break;
			}
			if(b-2*n>=0)
			{
			for(k=b-n-1;k>=n-1;k--)
			{
					printf("%d\n",sz[a-n][k]);
			}	
			}

			if(b-2*n<0)
			
			{
				break;
			}
			if(a-1-2*n>=0)
			{
			for(k=a-n-1;k>n-1;k--)
			{
					printf("%d\n",sz[k][n-1]);
			}
			}
			if(a-2*n-1<0)
			{
				break;
			}
			
		}
	
		return 0;
	}