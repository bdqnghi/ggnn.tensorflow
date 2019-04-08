int a[1000][1000];
int main(int argc, char* argv[])
{
	int n;
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		     scanf("%d",&a[i][j]);
		}
	}
	int a1=0,a2=0,b1=0,b2=0;
    for(i=0;i<n;i++)
	{
	    for(j=0;j<n;j++)
		{
	       if (a[i][j]==0)
		   {
			    a1=i;
			    b1=j;
		        break;
		   }
		}
		if (a[a1][b1]==0){
		        break;
		}
	}
    for(i=a1;i<n;i++)
	{
		 if (a[i][b1]==255)
		{
			 a2=i-1;
			break;
		}
	}
   for(j=a2;j<n;j++)
	{
		 if (a[a2][j]==255)
		{
			 b2=j-1;
			break;
		}
	}
	int s=0;
    for(i=a1;i<a2;i++)
	{
		for(j=b1;j<b2;j++)
		{
		    if (a[i][j]==255)
			{
			     s++;
			}
		}
	}
	printf("%d\n",s);
	return 0;
}
