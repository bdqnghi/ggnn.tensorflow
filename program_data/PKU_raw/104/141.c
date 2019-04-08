
int erchashu(int a[1000],int n)
{
	int i;
	a[0]=n;
	if(n!=1)
	{
		for(i=1;;i++)
		{
			a[i]=a[i-1]/2;
		    if(a[i]==1)break;
		}
	    return i;
	}
	else
		return 0;
}

void main()
{
	int a,b,A[1000],B[1000],m,n,p,q;
	scanf("%d %d",&a,&b);
	m=erchashu(A,a);
	n=erchashu(B,b);
	{
	    if(A[0]==B[0])
		{
		    printf("%d\n",A[0]);
		}

		else
		{
			for(p=m,q=n; ;p--,q--)
			{
				if(A[p]==B[q])
					continue;
		        else if(A[p]!=B[q])
				{
					printf("%d\n",A[p+1]);
			        break;
				}
				
			}
		}
	}
}



