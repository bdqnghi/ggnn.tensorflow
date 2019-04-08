
int main(int argc, char* argv[])
{
	int sz[15];
	int a,i,k,count=0;
	for(i=0;i<15;i++)
	{
		scanf("%d",&a);
		if(a==-1)break;
		else if(a==0)
		{   i=-1;
			printf("%d\n",count);
			count=0;
			continue;
		}
		else sz[i]=a;
	    for(k=0;k<=i;k++)
		{
			if(sz[i]==sz[k]*2||sz[k]==sz[i]*2)count++;
		}
	}
	return 0;
}
