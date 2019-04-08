int main()
{  int i,j,n,k,l,t1,t2,t3=0,t4,t5=0;
   int a[5000][2];
   scanf("%d",&n);
   for(k=0;k<n;k++)
	   for(l=0;l<2;l++)
   {scanf("%d",&a[k][l]);}
	   for(j=0;j<n-1;j++)
		for(i=0;i<n-1-j;i++)
		{   if(a[i][0]>a[i+1][0])
			{t1=a[i][0];
			a[i][0]=a[i+1][0];
			a[i+1][0]=t1;
			t2=a[i][1];
			a[i][1]=a[i+1][1];
			a[i+1][1]=t2;}
		}
  for(i=1;i<n;i++)
	{for(j=0;j<n;j++)
    {if((a[i][0]<=a[j][1])&(a[i][0]>=a[j][0])) {t5=t5;}
	else {t5=t5+1;}}
     
	
    if (t5==n-1){t3=0; 
	          printf("no"); 
	          break;}
	else{t3=1;
	t5=0;}
    }
t4=a[0][1];
if(t3!=0)
	{   for(i=0;i<n;i++)
	    { 
	      if (a[i][1]>=t4)
	      {t4=a[i][1];}
	    }
	printf("%d %d",a[0][0],t4);}
return 0;
}