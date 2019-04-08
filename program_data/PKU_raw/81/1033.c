void main()
{
	int change(int *p,int n,int m);
	int a[5][5],i,j,(*p)[5],*k;int m,n;
     p=a;
	for(i=0;i<5;i++)
	{for(j=0;j<4;j++)
			scanf("%d",*(p+i)+j);
	     scanf("%d\n",*(p+i)+4);
	}
	scanf("%d%d",&m,&n);
    k=*a;
	if(change(k,n,m))
     for(i=0;i<5;i++)
	{for(j=0;j<4;j++)
			printf("%d ",*(*(p+i)+j));
	     printf("%d\n",*(*(p+i)+4));
	}
	 else printf("error");
}
int change(int *p,int n,int m)
{
	int i,j,k;
	if(n<0||n>4||m<0||m>4)i=0;
	else 
	{ for(j=0;j<5;j++)
	{k=*(p+5*n+j);
	*(p+5*n+j)=*(p+5*m+j);
		*(p+5*m+j)=k;
	}
	i=1;
	
	}

	return(i);
}