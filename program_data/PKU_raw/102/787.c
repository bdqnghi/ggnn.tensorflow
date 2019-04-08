void main()
{
	int num,i,j=0,k=0,m,n;
	float hight[N],hi,woman[N],man[N];
	char string1[5]="male";
	char string[N][7];
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%s %f",string[i],&hight[i]);
		if(strcmp(string[i],string1)==0)
		{
			man[j]=hight[i];
		    j=j+1;
		}
		else
		{
			woman[k]=hight[i];
			k=k+1;
		}
	}
	for(i=0;i<j;i++)
		for(m=i;m<j;m++)
		{
			if(man[i]>man[m])
			{
				hi=man[i];
				man[i]=man[m];
				man[m]=hi;
			}
		}
	for(i=0;i<k;i++)
		for(n=i;n<k;n++)
		{
			if(woman[i]<woman[n])
			{
				hi=woman[n];
				woman[n]=woman[i];
				woman[i]=hi;
			}
		}
		for(i=0;i<j;i++)
			printf("%4.2f ",man[i]);
		for(i=0;i<k-1;i++)
			printf("%4.2f ",woman[i]);
		printf("%4.2f",woman[k-1]);
		printf("\n");
}
				


			