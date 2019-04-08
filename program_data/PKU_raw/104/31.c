int main()
{
	int a1[20],a2[20],A1,A2,i,j,k,l;
	scanf("%d %d",&A1,&A2);
	if(A1==A2) 
	{
		printf("%d",A2);
		return 0;
	}
	for(i=0;A1!=0;i++)
	{
		a1[i]=A1;
		A1=A1/2;
	}
	for(j=0;A2!=0;j++)
	{
		a2[j]=A2;
		A2=A2/2;
	}
	for(k=0,l=0;k<i&&l<j;)
	{
		if(a1[k]==a2[l])
		{
			printf("%d",a1[k]);
			break;
		}
		else if(a1[k]>a2[l]) k++;
		else l++;
	}
	return 0;
}