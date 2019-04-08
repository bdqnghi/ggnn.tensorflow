void main()
{
	int array[5][5],n,m,i,z;
	int *p;
	int panduan(int,int);
	void zhuanhuan(int *,int*);
	for(i=0;i<5;i++)
	{   
		p=array[i];
	    scanf("%d %d %d %d %d\n",p,p+1,p+2,p+3,p+4);
	}
	scanf("%d %d",&n,&m);
	z=panduan(n,m);
	if(z==1)
	{
		zhuanhuan(array[n],array[m]);
		for(i=0;i<5;i++)
		{   
		p=array[i];
	    printf("%d %d %d %d %d\n",*p,*(p+1),*(p+2),*(p+3),*(p+4));
		}
	}
	if(z==0)
	{
		printf("error\n");
	}
}

int panduan(int n,int m)
{
	int z=1;
	if(n<0||n>4)z=0;
	if(m<0||m>4)z=0;
	return(z);
}

void zhuanhuan(int *a,int *b)
{
	int temp,i;
	for(i=0;i<5;i++)
	{
		temp=*(a+i);
		*(a+i)=*(b+i);
		*(b+i)=temp;
	}
}