void main()
{
	char str[2048]={'\0'};
	char *pstr;
	int num[2048]={0},temp[100]={0};
	int n,i,j,s1,s2,k=0,t,max,min;
	int *pnum,*ptemp;
	gets(str);
	n=strlen(str);
	pstr=str;
	pnum=num;
	*(pstr+n+1)=' ';
	for (i=n;i>=0;i--)
	{
		*(pstr+i)=*(pstr+i-1);
	}
	*(pstr)=' ';
	s1=0;
	ptemp=temp;
	for (i=1;i<n+2;i++)
	{
		if (*(pstr+i)==' ')
		{
			s2=i;
			*(pnum+i)=s2-s1-1;
			*(ptemp+k)=*(pnum+i);
			s1=s2;
			k++;
		}
	}
	for(j=1;j<=k-1;j++)
	{
		for(i=0;i<k-j;i++)
		{
			if(*(ptemp+i)>*(ptemp+i+1))
			{
				t=*(ptemp+i+1);
				*(ptemp+i+1)=*(ptemp+i);
				*(ptemp+i)=t;
			}
		}
	}
	max=*(ptemp+k-1);
	min=*(ptemp);
	for (i=0;i<n+2;i++)
	{
		if(*(pnum+i)==max)
		{
			for (j=(i-max);j<i;j++)
				printf("%c",*(pstr+j));
			printf("\n");
			break;
		}
	}
	for (i=0;i<n+2;i++)
	{
		if(*(pnum+i)==min)
		{
			for (j=(i-min);j<i;j++)
				printf("%c",*(pstr+j));
			return;
		}
	}
}