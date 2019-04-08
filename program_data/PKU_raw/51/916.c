int main()
{
    int n,bz,i,j,k,len,m,d,temp;
	char a[505],t[10];
	char b[700][10];
	int c[700]={0};
	scanf("%d",&n);
	scanf("%s",a);
	len=strlen(a);
	d=len-n+1;
	for(i=0;i<d;i++)
	{
		k=i;
		for(j=0;j<n;j++)
		{
			b[i][j]=a[k];
	
			k++;
		}
	}
	for(i=0;i<d;i++)
	{
		for(k=0;k<i;k++)
		{
			if(strcmp(b[i],b[k])==0) {c[k]++;break;}
		}
	}
	for(i=0;i<d;i++)
	{
		for(j=0;j<d-1;j++)
		{
			if(c[j]<c[j+1])
			{
				temp=c[j];strcpy(t,b[j]);
				c[j]=c[j+1];strcpy(b[j],b[j+1]);
				c[j+1]=temp;strcpy(b[j+1],t);
			}
		}
	}
    
	if(c[0]==0) printf("NO");
	else
	{
		for(i=0;i<d-1;i++)
		{
			if(c[i]!=c[i+1]) {bz=i+1;break;}
		}
        if(i==d-1) bz=d;
		printf("%d\n",c[0]+1);
		for(m=0;m<bz;m++)
		{
			printf("%s\n",b[m]);
		}
	}
	return 0;
}
