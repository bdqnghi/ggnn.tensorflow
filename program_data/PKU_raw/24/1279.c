void main()
{
	char *p;
	int i,j,k,m,n,t,*a,max,min,i1,*b;
	p=(char *)malloc(10000*sizeof(char));
	a=(int *)malloc(10000*sizeof(int));b=(int *)malloc(10000*sizeof(int));
	gets(p);
	n=strlen(p);
	j=0;k=0;t=0;
	for(i=0;i<n;i++)
	{
		
		if(*(p+i)!=' ')
			k++;
		else
		{
			*(a+j)=k;*(b+j)=i+1;
			k=0;
			j++;
		}
	}
		k=0;
		for(i1=n-1;i1>=0;i1--)
		{
			if(*(p+i1)!=' ')
				k++;
			else
				break;
		}
		if(i1<0)
			*(a+j)=n;
		else
			*(a+j)=k;
		*(b+j)=n+1;
		max=*a;
		for(i1=0;i1<=j;i1++)
			if(*(a+i1)>max)
			{
				max=*(a+i1);
				t=i1;
			}
			if(t!=0)
			{
			for(i1=*(b+t-1);i1<(*(b+t)-1);i1++)
				printf("%c",*(p+i1));
			}
			else
				for(i1=0;i1<*(b+t)-1;i1++)
					printf("%c",*(p+i1));
			printf("\n");

           t=0;
			min=*a;
		for(i1=0;i1<=j;i1++)
			if(*(a+i1)<min)
			{
				min=*(a+i1);
				t=i1;
			}
			if(t!=0)
			{
			for(i1=*(b+t-1);i1<(*(b+t)-1);i1++)
				printf("%c",*(p+i1));
			}
			else
				for(i1=0;i1<*(b+t)-1;i1++)
					printf("%c",*(p+i1));
			printf("\n");

			

	
}