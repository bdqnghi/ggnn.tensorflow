int pai1 (int x[1000] ,int y);
int pai2 (int x[1000] ,int y);
int main ()
{
    int n, m, i, j;
    int a[1000],b[1000];
    scanf ("%d %d\n", &n, &m);
    for (i=0;i<n;i++)
    {
        scanf ("%d\n",&a[i]);
    }
    
    for (j=0;j<m;j++)
    {
        scanf ("%d",&b[j]);
    }
    pai1 (a,n);
	pai2 (b,m);
}


int pai1(int x[] ,int y)
{
    int i,j,min,stmp,flag=0;
	
    for(i=0;i<y;i++)
    {
        min=x[i];
        for(j=i+1;j<y;j++)
            if(min>x[j])        
            {
                min=x[j];
                stmp=x[i];
                x[i]=x[j];
                x[j]=stmp;
            }
    }
    for(i=0;i<y;i++)
	{  
		if (flag==0)
		{
			printf("%d" , x[i]);
			flag=1;
			continue;
		}
		if (flag==1)
		{
			printf(" %d" , x[i]);
		}
	}
	return 0;
} 
int pai2(int x[] ,int y)
{
    int i,j,min,stmp;
	
    for(i=0;i<y;i++)
    {
        min=x[i];
        for(j=i+1;j<y;j++)
            if(min>x[j])        
            {
                min=x[j];
                stmp=x[i];
                x[i]=x[j];
                x[j]=stmp;
            }
    }
    for(i=0;i<y;i++)
        printf(" %d" , x[i]);    
	return 0;
} 

