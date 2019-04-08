
int main()
{
	int n,z[500],j,i,w;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&z[i]);
	for(j=0;j<n;j++)
	{
		for(i=j+1;i<n;i++)
			if(z[j]>z[i])
			{
				w=z[i];
				z[i]=z[j];
				z[j]=w;
			}
	}
	w=0;
    for(i=0;i<n;i++)
	{
		if(z[i]%2!=0)
		{
			if(w==0)
			printf("%d",z[i]);
			else
				printf(",%d",z[i]);
		}
		w++;
	}
               
	return 0;
}
