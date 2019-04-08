int main()
{
	int n,i,j;
    scanf("%d",&n);
	char a[100],b[100];
	for(j=0;j<n;j++)
	{
	   scanf("%s",a);
	   scanf("%s",b);
	
	   int r=strlen(a);
	   int t=strlen(b);
 	   char *p1,*p2,*p3;
		p1=a;
		p2=b;
		p3=(char *)malloc((r+1)*sizeof(char));
		strcpy(p3,a);
	   for( i=1;i<=t;i++)
	   {
		    if(p1[r-i]-p2[t-i]<0)
			{
			  p3[r-i]=p1[r-i]+10-p2[t-i]+'0';
			  p1[r-i-1]--;
			  p3[r-i-1]--;
			}
		    else
			{
		      p3[r-i]=p1[r-i]-p2[t-i]+'0';
			}
	   }
	
    printf("%s\n",p3);
    free(p3);
	}
return 0;
}

