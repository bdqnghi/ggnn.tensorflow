void main()
{
	struct patient
	{ char ID[10];
	  int age;
	}pa[100];
	int n,i,t,j,k; 
	char m[10],str[100][100];
	int a[100],b[100]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d",&pa[i].ID,&pa[i].age);
		a[i]=pa[i].age;
		strcpy(str[i],pa[i].ID);
	}
	for(i=0,j=0;i<n;i++,j++)
	{
		if(a[i]>=60)
		 b[j]=a[i];
		
	}
    
	for(i=0;i<n-1;i++)
	{
	
			for(j=0;j<n-1-i;j++)
			{
				
					if(b[j+1]>b[j])
					{
						t=b[j];
                        strcpy(m,pa[j].ID);
					    b[j]=b[j+1];
					    strcpy(	pa[j].ID,pa[j+1].ID);
					    b[j+1]=t;
						strcpy(pa[j+1].ID,m);
					}
			
			}
		
	}
			
	

	for(i=0;i<n;i++)
	{
		
		if(b[i]!=0)
			printf("%s\n",pa[i].ID);
	}
	for(i=0;i<n;i++)
	{
			if(a[i]<60)
			printf("%s\n",str[i]);
	}
}


