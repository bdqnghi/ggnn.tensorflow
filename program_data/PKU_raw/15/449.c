

int main(int argc, char* argv[])
{
	int n,i,j,x,y,o,p,q=0,c,d;
	int a[100][100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{for(j=0;j<n;j++)
		{
		scanf("%d",&a[i][j]);
			
		}
	}
	for(i=0;i<n;i++)
	{for(j=0;j<n;j++)
		{
			if (a[i][j]==0&&a[i-1][j]==255&&a[i][j-1]==255)
			{
				x=i;y=j;
			}
			else if(a[i][j]==0&&a[i][j+1]==255&&a[i+1][j]==255)
			{
				o=i;p=j;
			}
		}
	} 
			c=o-x-1;
			d=p-y-1;
			q=c*d;
	printf("%d\n",q);
	return 0;
}

