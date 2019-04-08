void main()
{
	int n,i,j,m,k=0;
	char a[100],b[100],c;
	scanf("%s",a);
	scanf("%s",b);
	m=strlen(a);
	n=strlen(b);
	if(m!=n)
		printf("NO");
	else
	{
	   for(i=0;i<m;i++)
	   {
		   k=0;
		 for(j=i;j<m;j++)
		 {
			 if(b[j]==a[i])
			 {
				 c=b[j];
			     b[j]=b[i];
				 b[i]=c;
				 k=1;
				 break;
			 }
			 else 
				 k=0;
		 }
		 //printf("%d",k);
		
		 if(k==0)
			 break;
	   }
	   if(k==1)
		   printf("YES");
	   else
		   printf("NO");
	   }
}