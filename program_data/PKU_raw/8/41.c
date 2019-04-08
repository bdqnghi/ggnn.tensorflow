void sort(int str[],int n)
{
	int i,j,k,t;
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
			if(str[j]<str[k])
				k=j;
			t=str[k];
			str[k]=str[i];
			str[i]=t;
	}

}
void gather(int str1[],int str2[])
{
	int t=0,i;
	while(str1[t]!='\0')
		t++;
	for(i=t;str2[i-t]!='\0';i++)
		str1[i]=str2[i-t];
}

void main()
{
	int i,n1,n2,str1[100],str2[100];
	scanf("%d%d",&n1,&n2);
	for(i=0;i<n1;i++)
		scanf("%d",&str1[i]);
	scanf("\n");
	for(i=0;i<n2;i++)
		scanf("%d",&str2[i]);
	sort(str1,n1);
	sort(str2,n2);
	gather(str1,str2);
	for(i=0;i<(n1+n2-1);i++)
		printf("%d ",str1[i]);
	printf("%d",str1[n1+n2-1]);
	
}




