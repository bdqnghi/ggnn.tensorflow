int y[1000]={0};
int *p,*q;
int z[1000]={0};

int* count1(int n)
{int i,j,k,m,l;
	i=0;
	while(n!=0)
	{   y[i]=n;
		n=n/2;
		
		i++;
	}
	return y;
}
int* count2(int x)
{int i,j,k,m,l;
	i=0;
	while(x!=0)
	{   z[i]=x;
		x=x/2;
		
		i++;
	}
	return z;
}
int compare()
{
	int i,j;
	for(i=0;i<1000;i++)
	{
		for(j=0;j<1000;j++)
		{
			if(*(p+i)==*(q+j)) goto MM;
		}
	}
MM:
	return *(p+i);
}
void main()
{
	int i,j,s,t,c;
	
	scanf("%d%d",&s,&t);
	p=count1(s);
	q=count2(t);
	c=compare();
	printf("%d\n",c);
scanf("%d",&c);
}
