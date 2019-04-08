int main() 
{
    int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	      char a[260],b[260];
		  scanf("%s",a);
		  int l;
		  l=strlen(a);
		  for(j=0;j<l;j++)
		  {
		        switch(a[j])
				{
				     case'A':
						 b[j]='T';
						 break;
					 case'T':
						 b[j]='A';
						 break;
					 case'C':
						 b[j]='G';
						 break;
					 case'G':
						 b[j]='C';
						 break;
				}
		  }
		  for(j=0;j<l-1;j++)   printf("%c",b[j]);
		  printf("%c\n",b[l-1]);
	}
	return 0;
}