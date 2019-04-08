int main()
{
	int a[16],i,j,k,h,n;
	for (h=0;;h++)
	{n=0;
		
			for(i=0;i<16;i++)
			{
		     scanf("%d",&a[i]);
		     if(a[i]==0)
			  break;
			}
			if (a[0]==-1)
			{break;}
		for (j=0;j<i;j++)
		{for (k=0;k<i;k++)
			{if ((a[k]/a[j])==2 && (a[k]%a[j])==0)
			    n=n+1;
			 else n=n;
			}
		}
	   printf("%d\n",n);
	   if(a[0]==-1)
		{break;}
	
	}
	return 0;
}