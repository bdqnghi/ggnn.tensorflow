main()
{int c,a[1000],b[1000],i,d,j,k,n;
k=0; 
for(k=0;k<1000;k++)
 {scanf("%d",&n);
if(n==0) break;
 for(i=0;i<n;i++)
    scanf("%d",&b[i]);
 for(i=0;i<n;i++)
     scanf("%d",&a[i]);
   for(i=0;i<n;i++)
   for(j=0;j<n-1-i;j++)
    {
	  if(a[j]<a[j+1]) 
	  {
	   c=a[j+1];
	   a[j+1]=a[j];
	   a[j]=c; 
	  }
	  if(b[j]<b[j+1])
	  {
	   c=b[j+1];
	   b[j+1]=b[j];
	   b[j]=c;
	  }
	}
   c=-1000;
for(i=0;i<n;i++)
{d=0;
   for(j=i;j<n;j++)
   {if(a[j]>b[j-i]) d+=-1;
  
   else if(a[j]<b[j-i]) d+=1;
   }
   d-=i; 
   c=(d>c)?d:c;

}
printf("%d\n",c*200);}
}
