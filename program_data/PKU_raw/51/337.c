int main()
{
int n,i,j,l,m=1,k=0,num[500]={0};
char a[502],b[500][5],max[500][5];
scanf("%d\n",&n);
gets(a);
for(i=0;i<strlen(a)-n+1;i++)
 	for(j=0;j<n+1;j++)
  	{
   		if(j<n)b[i][j]=a[i+j];
   		else b[i][j]='\0';
   	}
b[i-1][n]='\0';
//for(i=0;i<strlen(a)-n+1;i++)
//	printf("b[%d]=%s\n",i,b[i]);
for(i=0;i<strlen(a)-n+1;i++)
{
	for(j=i;j<strlen(a)-n+1;j++)
   	{
    	if(strcmp(b[i],b[j])==0) num[i]++;
  	}
	if(num[i]>m) 
	{
  		for(l=0;l<k;l++)
	 		strcpy(max[l],"\0");
		strcpy(max[0],b[i]);
		k=1;
  		m=num[i];
  	} 
  	else if(num[i]==m) 
	{
	  	strcpy(max[k],b[i]);
	  	k++;
	} 
}
if(m==1) printf("NO");
else
{
	printf("%d\n",m);
	for(i=0;i<k;i++)
 		printf("%s\n",max[i]);
}
return 0;
}