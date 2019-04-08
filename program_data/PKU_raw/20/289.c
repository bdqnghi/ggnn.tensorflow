void main()
{
	char c1[20]={0},c2[3]={0},c3[10]={0};
int m,i,j,l,n1,n2,k,max;
for(k=0;k<10000;k++)
{
	scanf("%s %s",&c1,&c2);
		n1=strlen(c1);n2=strlen(c2);
	strcpy(c3,c1);
	for(i=0,max=c1[0];i<n1;i++)
		if(c1[i]>max){max=c1[i];m=i;}else max=max;
	   for(j=m+1,l=0;j<=i+n2,l<n2;j++,l++)
		   c1[j]=c2[l];
	   for(j=m+n2+1,l=m+1;j<n1+n2,l<n1;j++,l++)
		   c1[j]=c3[l];
	printf("%s\n",c1);
	for(i=0;i<n1+n2;i++)c1[i]=0;
	for(i=0;i<n2;i++)c2[i]=0;
}
}

