int main()
{
	int a[100],m,n,i,j,k,p;
	i=0;
	while(scanf("%d",&m)!=EOF)
	{	
		if(m==-1)
			break;
		else
			if(m==0)
			{
				for(j=0,n=0;j<=i-2;j++)
					for(p=j;p<=i-1;p++)
						if(a[j]==a[p]*2||a[p]==a[j]*2)
							n++;
				printf("%d\n",n);
						i=0;
			}
			else
			{
				a[i]=m;
				i++;
			}
	}
}


	
