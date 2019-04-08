void main()
{
	char *p;
	int *q,n,i,j=0,max=0,min=100,k,l=0;
	p=(char*)malloc(1000*sizeof(char));
	q=(int*)malloc(50*sizeof(int));
	for(i=0;i<50;i++)
		*(q+i)=0;
	gets(p);
	n=strlen(p);
	for(i=0;i<n;i++)
	{
		if(*(p+i)!=32)(*(q+j))++;
	    else {j++;*(p+i)=0;}
	}
	for(i=0;i<=j;i++)
	{if(max<*(q+i))max=*(q+i);
	if(min>*(q+i))min=*(q+i);}
	for(i=0;i<=j;i++)
		if(max==*(q+i))break;
	for(k=0;k<n;k++)
	{if(i==l)break;
	if(*(p+k)==0)l++;}
	printf("%s\n",p+k);
         l=0;
	for(i=0;i<=j;i++)
		if(min==*(q+i))break;
	for(k=0;k<n;k++)
	{if(i==l)break;
	if(*(p+k)==0)l++;}
	printf("%s",p+k);


}