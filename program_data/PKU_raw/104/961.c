
void tree(int p,int k,int c[])
{
	c[k]=p;
	if(c[k]==1)
		return;
	else
	{
		tree(c[k]/2,k+1,c);
	}
}

void main()
{
	int x,y,i,j,a[12]={0},b[12]={0};
	scanf("%d%d",&x,&y);
	tree(x,0,a);
	tree(y,0,b);
	for(i=j=0;;)
	{
		if(a[i]>b[j])
		{
			i++;
			continue;
		}
		if(b[j]>a[i])
		{
			j++;
			continue;
		}
		if(a[i]==b[j])
			break;
	}
	printf("%d\n",a[i]);
}
