int main()
{
	int i,j,n,p=0,q=0,k;
	double h,d[40],e[40],l;
	char a[10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s%lf",a,&h);
		if(strcmp(a,"male")==0)
		   {
   			d[p]=h;
   			p++;
   			}
   			else {e[q]=h;
   			q++;}
	}

	if(p>1)
	{
	for(k=p-2;k>=0;k--)
	  {
  		for(i=0;i<=k;i++)
  		{if(d[i]>d[i+1])
		  	{l=d[i];
		  	d[i]=d[i+1];
		  	d[i+1]=l;
		  	
		  	}
  		}	
	
		}
	
	}
	
		if(q>1)
	{
	for(k=q-2;k>=0;k--)
	  {
  		for(i=0;i<=k;i++)
  		{if(e[i]>e[i+1])
		  	{l=e[i];
		  	e[i]=e[i+1];
		  	e[i+1]=l;
		  	
		  	}
  		}	
	
		}
	
	}
	
	
	printf("%.2f",d[0]);
	
	for(i=1;i<p;i++)
	{
		printf(" %.2f",d[i]);
	}
	for(i=q-1;i>=0;i--)
	{
		printf(" %.2f",e[i]);
	}
	
return 0;	
}