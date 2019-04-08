void min(char a[],char b[])
{
	char k;
    int i,j;
	for(i=0;i<strlen(a)-1;i++)
     for(j=0;j<strlen(a)-i-1;j++)
		 if(a[j]<a[j+1])
		 {
			 k=a[j];
			 a[j]=a[j+1];
			 a[j+1]=k;
		 }
   for(i=0;i<strlen(b)-1;i++)
     for(j=0;j<strlen(b)-i-1;j++)
		 if(b[j]<b[j+1])
		 {
			 k=b[j];
			 b[j]=b[j+1];
			 b[j+1]=k;
		 }
		 if(strcmp(a,b)==0)
			 printf("YES");
		 else
			 printf("NO");
}
void main()
{
	char a[1000]={'\0'},b[1000]={'\0'};
	scanf("%s %s",a,b);
	min(a,b);
}
