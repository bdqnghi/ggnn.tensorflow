    
 struct book
   {
	   int num;
	   char writer[26];
   };
   int m;

int main()
{

  int i;
   scanf("%d",&m);
	book *p;
	p=(struct book*)malloc(sizeof(struct book)*m);
	for(i=0;i<m;i++)
	{
		scanf("%d %s",&p[i].num,p[i].writer);
	}
	int j=0,u=0;
	int *a;
	a=(int *)malloc(sizeof(int)*150);
	for(i='A';i<='z';i++)
	a[i]=0;

	for(i='A';i<='Z';i++)
	{
		for(j=0;j<m;j++)
		{
			for(u=0;u<strlen(p[j].writer);u++)
			{
				if(i==p[j].writer[u])
				{
					a[i]++;
					break;
				}
			}
		}
	}
	int max=0;
	for(i='A';i<='Z';i++)
	{
		if(max<a[i])
			max=a[i];
	}
	for(i='A';i<='Z';i++)
	{
		if(max==a[i])
		break;	
	}
	printf("%c\n%d\n",i,a[i]);
	for(j=0;j<m;j++)
	{
          for(u=0;u<strlen(p[j].writer);u++)
			{
				if(i==p[j].writer[u])
				{
				    printf("%d\n",p[j].num);
					break;
				}
			}	
	}	

	





   return 0;
}
                             
                                      
            
    
    
