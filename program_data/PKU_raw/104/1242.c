
int main(int argc, char* argv[])
{
	int x[1000],y[1000];
	int i,j,k,p=1;
	scanf("%d %d",&x[0],&y[0]);
	for (i=1;x[i-1]!=1;i++)
	{
		if (x[i-1]%2==0)
		    x[i]=x[i-1]/2;
		if (x[i-1]%2==1)
            x[i]=(x[i-1]-1)/2;
	}
    	for (i=1;y[i-1]!=1;i++)
	{
		if (y[i-1]%2==0)
		    y[i]=y[i-1]/2;
		if (y[i-1]%2==1)
            y[i]=(y[i-1]-1)/2;
	}

	for (k=0;x[k-1]!=1 && p==1;k++)
	{	for (j=0;y[j-1]!=1;j++)
		{   if (x[k]==y[j]) 
	{
	           printf("%d\n",x[k]);
			   p=0;
	           break;	
	}
		}
	}

	return 0;
}
