/*void f()
{
	scanf("%d %d",&num1,num2);
	int i;
	for(i=0;i<num1;i++)
	{
		scanf("%d",&word1[i]);
	}
	printf("\n");
	for(i=0;i<num2;i++)
	{
		scanf("%d",&word2[i]);
	}
	printf("\n");
}
void g()
{
	f();
	int j,k,temp;
	for(j=1;j<=num1*num1;j++)
	{
		for(k=0;k<num1-1;k++)
		{
			if(num1[k]>=num1[k+1])
			{
				temp=num1[k];
				num1[k]=num1[k+1];
				num1[k+1]=temp;
			}
		}
	}
	for(j=1;j<=num2*num2;j++)
	{
		for(k=0;k<num2-1;k++)
		{
			if(num2[k]>=num2[k+1])
			{
				temp=num2[k];
				num2[k]=num2[k+1];
				num2[k+1]=temp;
			}
		}
	}
}
void A()
{
	f();
	g();
	int zjword[300],l;
	for(l=0;l<num1+num2;l++)
	{
		if(l<num1)
		{
			zjword[l]=word1[l];
		}else{
			zjword[l]=word2[l-num1];
		}
	}
}
void B()
{
	f();
	g();
	A();
	int m;
	for(m=0;m<num1+num2;m++)
	{
		if(m!=num1+num2-2)
		printf("%d ",zjword[m]);
		else printf("%d",zjword[m]);
	}
}*/
int main()
{
	int word1[100],word2[100];
    int num1,num2;
	scanf("%d %d",&num1,&num2);
	int i;
	for(i=0;i<num1;i++)
	{
		scanf("%d",&word1[i]);
	}
	printf("\n");
	for(i=0;i<num2;i++)
	{
		scanf("%d",&word2[i]);
	}
	printf("\n");
	int j,k,temp;
	for(j=1;j<=num1*num1;j++)
	{
		for(k=0;k<num1-1;k++)
		{
			if(word1[k]>=word1[k+1])
			{
				temp=word1[k];
				word1[k]=word1[k+1];
				word1[k+1]=temp;
			}
		}
	}
	for(j=1;j<=num2*num2;j++)
	{
		for(k=0;k<num2-1;k++)
		{
			if(word2[k]>=word2[k+1])
			{
				temp=word2[k];
				word2[k]=word2[k+1];
				word2[k+1]=temp;
			}
		}
	}
	int zjword[300],l;
	for(l=0;l<num1+num2;l++)
	{
		if(l<num1)
		{
			zjword[l]=word1[l];
		}else{
			zjword[l]=word2[l-num1];
		}
	}
	int m;
	for(m=0;m<num1+num2;m++)
	{
		if(m!=num1+num2-1)
		printf("%d ",zjword[m]);
		else printf("%d",zjword[m]);
	}
	return 0;
}

