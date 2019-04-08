int main(int argc, char* argv[])
{
	 int n,p;
	 int i,j;
	 char a[50];
	 scanf("%d",&n);
	 for (i=0;i<n;i++)
	 {
		 scanf ("%s",a);
		 char*s=a;
		 p=strlen(a);
		 if(((*(s+p-2)=='e')&&(*(s+p-1)=='r'))||((*(s+p-2)=='l')&&(*(s+p-1)=='y')))
		 {
			for (j=0;j<p-2;j++)
			{
				printf("%c",a[j]);
			}
			printf("\n");
		 }
		 else 
		 {
			 for (j=0;j<p-3;j++)
			 {
				 printf("%c",a[j]);
			 }
			 printf("\n");
		 }
	 }

	 return 0;
}