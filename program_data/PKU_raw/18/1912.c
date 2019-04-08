int a[100][100];
int main()
{
	int m,n,i,j,t,k=0,p,ans;
	scanf("%d",&m);
	while(k<m)
	{
		n=m;
		ans=0;
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				scanf("%d",*(a+i)+j);
   p=1;
			while(n>p)
			{
				for(i=0;i<n;i++)
				{if(i&&i<p)continue;
					t=*(*(a+i)+0);
					for(j=p;j<n;j++)
						t=t>*(*(a+i)+j)?*(*(a+i)+j):t;
					for(j=0;j<n;j++)
					    *(*(a+i)+j)-=t;
				}
				for(i=0;i<n;i++)
				{if(j&&j<p)continue;
						t=*(*(a+0)+i);
						for(j=p;j<n;j++)
							t=t>*(*(a+j)+i)?*(*(a+j)+i):t;
						for(j=0;j<n;j++)
							*(*(a+j)+i)-=t;
				}
				ans+=*(*(a+p)+p);
				p++;
			}
			printf("%d\n",ans);
			k++;
	     }
}
