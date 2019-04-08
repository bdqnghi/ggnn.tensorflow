int main()
{
	char c[31],num[30];
	int i,n1[30],n2[30],k=0,l,j,m;
	gets(c);
	l=strlen(c);
	for(i=0;i<l;i++)
	{			
		if((c[i]>47&&c[i]<58)&&(c[i-1]<48||c[i-1]>57))
		{
			n1[k]=i;                  //????
		}
		if((c[i]>47&&c[i]<58)&&(c[i+1]<48||c[i+1]>57))
		{
			n2[k]=i;                  //????
			k++;
		}
		
	}
	for(i=0;i<k;i++)
	{
			for(m=0;m<30;m++)
			{num[m]='\0';}
		for(j=n1[i];j<=n2[i];j++)
		{
			num[j-n1[i]]=c[j];
		}
		printf("%s\n",num);
	}
	return 0;
}