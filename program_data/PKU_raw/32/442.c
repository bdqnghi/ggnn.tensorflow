int main ()
{
	int l1,l2,i,b,n,j,m,jg[100];
	char a1[100],a2[100];
	scanf ("%d",&n);
	for (j=0;j<n;j++)
	{
		gets (a1);
		gets (a1);
	    gets (a2);
	    l1=strlen(a1);
	    l2=strlen(a2);
	
     	b=l1-l2;
    	for (i=l1-1;i>l1-l2-1;i--)
		{
		    if (a1[i]>a2[i-b] || a1[i]==a2[i-b])
			      jg[i]=a1[i]-a2[i-b];
		     else if (a1[i]<a2[i-b])
			 {
		    	jg[i]=a1[i]+10-a2[i-b];
		    	a1[i-1]=a1[i-1]-1;
			 }

		}

		for (i=0;i<l1-l2;i++)
			jg[i]=a1[i]-'0';

		for (i=0;i<l1;i++)
		{
			if (jg[i]==0)
				continue;
			else 
			{
				for (m=i;m<l1;m++)
				{
					printf ("%d",jg[m]);
					
				}
				break;
			}
		};
		printf("\n");
						
	}


	return 0;
}