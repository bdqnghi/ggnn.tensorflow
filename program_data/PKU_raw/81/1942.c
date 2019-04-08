int pd(int n,int m)
{   if (n<=4 && n>=0 && m<=4 && m>=0) return 1;
    else return 0;
}

int main(int argc, char* argv[])
{
	int a[5][5],b[5];
	int i,j,m,n;
	for (i=0;i<=4;i++)
	{    for (j=0;j<=4;j++)
		{	scanf ("%d",&a[i][j]);
		}
	}
	scanf ("%d %d",&n,&m);
	if (pd(n,m)==0) printf("error");
	if (pd(n,m)==1) 
	{   for (j=0;j<=4;j++)
	{   b[j]=a[m][j];
        a[m][j]=a[n][j];
		a[n][j]=b[j];
	}
	    for (i=0;i<=4;i++)
	{    for (j=0;j<=4;j++)
		{	printf ("%d",a[i][j]);
		    if (j==4) printf("\n");
			if (j!=4) printf(" ");
		}
	}
	}

	return 0;
}

