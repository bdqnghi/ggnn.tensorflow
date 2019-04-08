int main()
{
    char a[50],b[50],c;
	int i,j,d;
	scanf("%s %s",a,b);
	for(i=0;i<strlen(b);i++)
	{
		d=0;
		if(a[0]==b[i])
		{
		   d=1;
		   for(j=0;j<strlen(a);j++)
		   {
			    if(a[j]!=b[i+j])
				{
				  d=2;
				  break;
				}
		   }
		   if(d==1)
		   {
			   printf("%d",i);
			   break;
		   }
		}
	}
	return 0;
}
