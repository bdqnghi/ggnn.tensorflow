
int main()
{
	int i,j,k,l1,l2,l3,e=0,sum=0;
	char s[300],z[300],h[300];
	scanf("%s",z); 
	scanf("%s",s);
//	scanf("%s",h);
	l2=strlen(s);  
	l1=strlen(z);
//	l3=strlen(h);
	for (i=0;i<=l2-l1;i++)
	{  
		e=0;
		for (j=0;j<l1;j++)
		{
			if(z[j]==s[j+i])
			{
			  e++;
			}

		} 
	
		if (e==l1)
		{
            printf("%d",i);
			sum++;
			break;

		/*	for (j=0;j<i;j++)
			{
			  printf("%c",s[j]);
			}
			for (j=0;j<l3;j++)
			{
			   printf ("%c",h[j]);
			}
			if (i+l2<l1-1)
			{
				for (j=i+l2;j<l1;k++)
				{
			       printf("%c",s[j]);
				}
			}
			sum++;
	       break;
		}
	}
	if(sum==0)
	{
	  for (i=0;i<l1;i++)
	  {
	     printf("%c",s[i]);
	  }
	}
	
*/
		}
	}
	if (sum==0)
		printf(" ");
	return 0;
}
