

void main()
{
	int n,i,j,k;
	struct patient
	{
		char id[10];
		int age;
	}pa[1000],t;
	
 
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{ 
       	
	
		scanf("%s %d",pa[i].id,&pa[i].age);

				
				

	}
	
  
	for(i=0;i<n;i++)
	{ 
	     
		for(j=n-1;j>=0;j--)
					

if(pa[j].age>pa[j-1].age&&pa[j].age>=60)
					

{
	
t=pa[j];
pa[j]=pa[j-1];
pa[j-1]=t;

}

}	
	for(i=0;i<n;i++)
	{
		if(pa[i].age>=60)
		{
			printf("%s\n",pa[i].id);
		}
	}
	for(i=0;i<n;i++)
	{
		if(pa[i].age<60)
		{
			printf("%s\n",pa[i].id);
		}
	}
}
