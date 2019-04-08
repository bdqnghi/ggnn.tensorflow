void main()
{int i,j,n,m=0,*p,*flag;
scanf("%d",&n);
p=(int *)malloc(n*sizeof(int));
flag=(int *)malloc(n*sizeof(int));
for(i=0;i<n;i++)
	{scanf("%d",p+i);
	*(flag+i)=0;}
for(i=0;i<n;i++)
	for(j=i+1;j<n;j++)
		if(*(p+i)==*(p+j)) *(flag+j)=1;
for(i=0;i<n;i++)
	{
	if(*(flag+i)==0) 
		{if(m==1)
		{putchar(',');m--;}
	printf("%d",*(p+i));m++;}
	}
}