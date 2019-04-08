void main()
{
	char*p,*p1;
	int i,j,k,n;
	p=(char*)malloc(200*sizeof(char));
	p1=(char*)malloc(200);
	gets(p);
	n=strlen(p);
	//printf("%d\n",n);
	for(i=n-1,j=0;i>=0;i--)
	{
		if((*(p+i)==' ')||(i==0))
		{
			if(i!=0) k=i+1;
			else k=i;
			for(;(*(p+k)!=' ')&&(*(p+k)!='\0');k++,j++)
			{
				*(p1+j)=*(p+k);
			}
			if(i!=0)*(p1+j)=' ';
			j=j+1;
		}
	}
	*(p1+j)='\0';
	
	puts(p1);
}
