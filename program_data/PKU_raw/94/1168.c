int main()
{
	int a[501]={0},m,j,n,i,t,b[501]={0};
	scanf("%d",&n);
	for(i=0,j=0;i<n;i++)
	{  scanf("%d",&a[i]);
	   if(a[i]%2!=0) 
	   {
	   b[j]=a[i];}
	   if(b[j]!=0) 
	   {j=j+1;}
	   
		}
	for(i=0;i<j;i++)
	{ for(m=0;(m+1)<j-i;m++)
	  { if(b[m]>b[m+1]) 
	     { t=b[m];
	       b[m]=b[m+1];
	       b[m+1]=t;
	       
				}
			}
		}
		printf("%d",b[0]);
		for(i=1;i<j;i++)
		{printf(",%d",b[i]);}
	return(0);
 
}
