int main(int argc, char* argv[])
{
	int a[1000][1000];
	int n,i,j,point1,point2,row1,colum1,row2,colum2,num;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		    if(a[i][j]==0)
			{
			  point1=a[i][j];
			  row1=i;
			  colum1=j;
			  i=n+1;
			  break;
		  }
		}
    }
	for(i=n-1;i>=0;i--)
	{
		for(j=n-1;j>=0;j--)
		{
		  if(a[i][j]==0)
		  {
				point2=a[i][j];
				row2=i;
				colum2=j;
				i=-1;
                break;
			}
		}
    }
num=(row2-row1-1)*(colum2-colum1-1);
printf("%d\n",num);
return 0;
}



