
int main(int argc, char* argv[])
{
	double a,b,t;
    double max=0.0;
	int n,i,j;
    scanf("%d",&n);

    double s[100][2];
	
    for(i=0;i<=n-1;i++)
	{ 
		scanf("%lf%lf",&s[i][0],&s[i][1]);	
	}

    for(j=0;j<=n-2;j++)
	{
		for(i=0;i<=n-j-1;i++)
		{
			a=(s[j][0]-s[j+i][0])*(s[j][0]-s[j+i][0]);
            b=(s[j][1]-s[j+i][1])*(s[j][1]-s[j+i][1]);
		    t=sqrt(a+b);
            if(t>max)
	        max=t;	
		}



	}

    printf ("%.4f\n",max);


	return 0;
}
	
