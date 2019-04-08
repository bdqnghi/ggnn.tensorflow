void main()
{void search(int m,int n);
	int m,n,k=1,i,j=0,*p,a[300],b[10][2];
	for(i=0;;i++)
	{
	scanf("%d %d",&b[i][1],&b[i][2]);
	if(b[i][1]==0)break;
	}
for(j=0;j<i;j++)
	search(b[j][1],b[j][2]);
}


void search(int m,int n)
{int k=0,i,j=0,*p,a[300];
	p=a;
	for(i=0;i<m;i++)
		*(p+i)=i+1;
	i=0;
	
	while(j<m-1)
	{
		if(*(p+i)!=0)k++;
	if(k==n)
	{
		*(p+i)=0;
		k=0;
		j++;
	}
	i++;
	if(i==m)i=0;
	}
	while(*p==0)p++;
     printf("%d\n",*p);
}
	

