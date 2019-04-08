int main()
{
    int n,sz[100],zs[100],i,k=0,m,a;
	char id[100][10],di[100][10],zfc[10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d",id[i],&(sz[i]));
	}
	for(i=0;i<n;i++)
	{
       if(sz[i]>=60)
	   {
	    zs[k]=sz[i];
		strcpy(di[k],id[i]);
		k++;
	   } 
	}
	 for(m=0;m<k-1;m++)
	    {
		  for(i=0;i<k-1-m;i++)
		  {
			 if(zs[i]<zs[i+1])
			 {
				 a=zs[i];
				 zs[i]=zs[i+1];
				 zs[i+1]=a;
				 strcpy(zfc,di[i]);
				 strcpy(di[i],di[i+1]);
				 strcpy(di[i+1],zfc);
			 }
		  }
	    }
	for(i=0;i<n;i++)
	{
		if(sz[i]<60)
		{
            strcpy(di[k],id[i]);
			k++;
		}
	}
	for(i=0;i<k;i++)
	{
		printf("%s\n",di[i]);
	}
    return 0;
}