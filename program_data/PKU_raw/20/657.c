void main()
{
	char *p1,*p2;
	int m,n,i,j,k,t,max;
	p1=(char *)malloc(1000*sizeof(char));
	p2=(char*)malloc(3*sizeof(char));
	while(scanf("%s %s",p1,p2)!=EOF)
	{
		t=0;
		n=strlen(p1);
		max=*p1;
		for(i=0;i<n;i++)
			if(*(p1+i)>max)
			{
				max=*(p1+i);
				t=i;
			}
			for(i=n-1;i>=t+1;i--)
				*(p1+i+3)=*(p1+i);
			*(p1+n-1+4)='\0';
			for(i=0;i<3;i++)
			*(p1+t+1+i)=*(p2+i);
			printf("%s\n",p1);
	}
	
}
