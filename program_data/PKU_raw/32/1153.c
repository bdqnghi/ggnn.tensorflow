int main(int argc, char* argv[])
{  
	int i,a[101],b[101];
	char A[101],B[101];

	int n,l1,l2;
	int j,t,h;

	scanf("%d",&n);
	for(i=0;i<n;i++)
	{		
		for(h=0;h<101;h++)
		a[h]=b[h]=0;
		int k=1;
	    scanf("%s%s",A,B);
		l1=strlen(A);
		l2=strlen(B);

		for(j=0;j<l1;j++)
			a[100-l1+j]=A[j]-'0';
		for(j=0;j<l2;j++)
            b[100-l2+j]=B[j]-'0';
		  for(j=99;j>0;j--)
		  {
			if(a[j]>=b[j])  a[j]=a[j]-b[j];
			else
			{
				a[j]-=b[j]-10;
				a[j-1]-=1;
			}
		  }
          for(j=0;j<100;j++)
		  {
			  if(a[j]!=0)
			  {
		     	 k=j;
				 break;
			  }
		  }
		  for(j=k;j<100;j++)
			  printf("%d",a[j]);
		
		printf("\n");
	}



	return 0;
}