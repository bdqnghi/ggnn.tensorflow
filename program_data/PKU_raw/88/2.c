
int main()
{
	char *p,s;
	int n,i,j=0,m=0,*q;
	p=(char*)malloc(40*sizeof(char));
	q=(int*)malloc(40*sizeof(int));
	gets(p);
	n=strlen(p);
	for (i=0;i<n;i++)
	{
		if (*(p+i)>47&&*(p+i)<58)
		{
			*(q+j)=*(p+i)-48;
		//	printf("%d\n",*(q+j));
		
			j++;
		}
		else{ *(q+j)=-1;
		j++;
		}

	}
	for (i=0;i<j;i++)
	{
		m=m+*(q+i);
		if(*(q+i)!=-1)

			printf("%d",*(q+i));
		else 
			if (*(q+i+1)!=-1&&(m+i+1!=0))
			{
				printf("\n");
			}
		 
	

	}

}