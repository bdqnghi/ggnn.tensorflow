int main()
{
	char *p,*q;
	int i,j,knum=0;
	p=(char*)malloc(1000*sizeof(char));
    q=(char*)malloc(1000*sizeof(char));
	gets(p);
	for(i=0,j=0;*(p+i)!='\0';i++)
	{
		if(*(p+i)!=' ')
		{
			knum=0;
			*(q+j)=*(p+i);
			j++;
		}
		else
		{
			if(knum==0)
			{*(q+j)=*(p+i);j++;}
			knum++;
		}
	}
	*(q+j)='\0';
   puts(q);
}