
int main(int argc, char* argv[])
{

	int x,y,a[1002],b[1002],i,j,m;
	scanf("%d%d",&x,&y);
	for (i=0;x>0;i++)
	{
		a[i]=x;
		x=x/2;
	}
	for (j=0;y>0;j++)
	{
		b[j]=y;
		y=y/2;
	}
		if(i>j)
	{
	for(m=0;m<j;m++)
	{
		if(a[i-j]==b[m])
			break;
		i++;
	}
	printf("%d",b[m]);
	}
	else 
	{
	for(m=0;m<i;m++)
	{
		if(a[m]==b[j-i])
			break;
		j++;
	}
	printf("%d",a[m]);
	}
	
	
		return 0;
	
	}