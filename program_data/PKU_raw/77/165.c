int sum(int line2[],int a,int b)
{
	int i,c=0;
	for(i=a;i<=b;i++)
		c+=line2[i];
	return(c);
}


int main()
{
	char line[100];
	int line1[100],i,j,k,line3[50][2]={0};
	scanf("%s",line);
	k=strlen(line)/2-1;
	for(i=0;i<strlen(line);i++)
	{
		if(line[i]==line[0])
			line1[i]=1;
		if(line[i]==line[strlen(line)-1])
			line1[i]=-1;
	}
	for(i=strlen(line)-1;i>=0;i--)
	{
		if(line1[i]==-1)
			for(j=i-1;j>=0;j--)
				if(sum(line1,j,i)==0)
				{
					line3[k][0]=j;
					line3[k][1]=i;
					k--;
					break;
				}
	}
	for(i=0;i<strlen(line)/2;i++)
		printf("%d %d\n",line3[i][0],line3[i][1]);
	return 0;
}

