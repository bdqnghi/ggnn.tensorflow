struct zimu
{
	char a;
	int n;
}B[300],temp;
int main()
{
	char A[303];
	int i,j=0,k,number,flag,flag1=0;
	scanf("%s",A);
	number=strlen(A);
	for(i=0;i<number;i++)
	{
		B[i].n=0;
	}
	for(i=0;i<number;i++)
	{
		if((A[i]>=65&&A[i]<=90)||(A[i]>=97&&A[i]<=122))
		{
			flag1=1;
		flag=0;
		if(i==0)
		{
			B[j].a=A[i];
			B[j].n=1;
			j++;
		}
		else
		{
			for(k=0;k<j;k++)
			{
				if(B[k].a==A[i])
				{
					B[k].n++;
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				B[j].a=A[i];
				B[j].n=1;
				j++;
			}
		}
		}
	}
	if(flag1==0)
		printf("No");
	else
	{
	for(i=1;i<j;i++)
	{
		for(k=0;k<j-i;k++)
		{
			if(B[k].a>B[k+1].a)
			{
				temp=B[k+1];
				B[k+1]=B[k];
				B[k]=temp;
			}
		}
	}

	for(i=0;i<j;i++)
	{
		printf("%c=%d\n",B[i].a,B[i].n);
	}
	}
	return 0;
}