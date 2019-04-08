void main()
{
	struct patient
	{char id[10];
	int a;
	}all[100],old[100],temp;
	int n,j=0,k,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%d",all[i].id,&all[i].a);
          if(all[i].a>=60)
		  {
           		old[j]=all[i];
				j=j+1;
		  }
	}
	for(i=j-1;i>0;i--)
	{
		for(k=0;k<i;k++)
		{
			if(old[k].a<old[k+1].a)
			{
				temp=old[k];
				old[k]=old[k+1];
				old[k+1]=temp;
			}
		}
	}
	for(i=0;i<j;i++)
	{
	    printf("%s\n",old[i].id);
	}
    for(i=0;i<n;i++)
	{
		if(all[i].a<60)
			printf("%s\n",all[i].id);
	}
}