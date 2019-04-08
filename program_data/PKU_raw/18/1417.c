int main()
{
	int a[101][101],n;
	int (*p)[101];
	scanf("%d",&n);
	int nn=n,min,s,i,j,nnn=n;
	while (nn--)
	{
		n=nnn;
		s=0;
		for (i=0;i<n;i++)
		for (j=0;j<n;j++)
		scanf("%d",*(a+i)+j);
		while (n>1) 
		{
		for (i=0;i<n;i++)
		{
			min=1000000;
			for (j=0;j<n;j++)
			if (*(*(a+i)+j)<min) min=*(*(a+i)+j);
			for (j=0;j<n;j++) *(*(a+i)+j)-=min;
		}
		for (j=0;j<n;j++)
		{
			min=1000000;
			for (i=0;i<n;i++)
			if (*(*(a+i)+j)<min) min=*(*(a+i)+j);
			for (i=0;i<n;i++) *(*(a+i)+j)-=min;
		}
		s=s+*(*(a+1)+1);
		for(i=1;i<n-1;i++){
		*((*a)+i)=*((*a)+i+1);
	}
for(i=1;i<n-1;i++){
		*(*(a+i))=*(*(a+i+1));
	}
		for (i=1;i<n;i++)
		{
			for (j=1;j<n;j++) *(*(a+i)+j)=*(*(a+i+1)+j+1);
		}
		
		n--;
		}
		printf("%d\n",s);
	}
} 
