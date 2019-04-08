int main()
{
	int n,i,j,k1,k2,k3,k4,z,h;
	float a[1000],sum=0,s,b[1000],m,o,fl;
	scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%f",&a[i]);
			sum=sum+a[i];
            b[i]=a[i];
		/*	printf("%f,%f,%f\n",a[i],sum,b[i]);*/
		}
    s=sum/n;
	/*printf("%f\n",s);*/
		
    for(j=0;j<n;j++)
	{
		if(b[j]-s>0)
		{
			b[j]=b[j]-s;
		}
		else
		{
			b[j]=s-b[j];
		}
	/*	printf("%f\n",b[j]);
*/	}
    for(k1=1;k1<n;k1++)
	{
		for(k2=0;k2<n-k1;k2++)
		{
          if(a[k2]>a[k2+1])
		  {m=a[k2];
		    a[k2]=a[k2+1];
			a[k2+1]=m;}
          if(b[k2]>b[k2+1])
		  {o=b[k2];
		   b[k2]=b[k2+1];
		   b[k2+1]=o;}
		
		}
	}
  /*  for(k5=0;k5<n;k5++)
	{
		printf("%f, %f\n",a[k5],b[k5]);
	}*/
    
	
	
	
	
	fl=b[n-1];/*printf("fl=%f\n",fl);*/
	for(k3=0;k3<n;k3++)
	{
		if((s-b[n-1]<a[k3]+0.01)&&(s-b[n-1]>a[k3]-0.01)||(s+b[n-1]<a[k3]+0.01)&&(s+b[n-1]>a[k3]-0.01))
		{	
			
			printf("%.f",a[k3]);
		z=k3;
		break;}
	}
   for(k4=z+1;k4<n;k4++)
	{
		if((s-b[n-1]<a[k4]+0.01)&&(s-b[n-1]>a[k4]-0.01)||(s+b[n-1]<a[k4]+0.01)&&(s+b[n-1]>a[k4]-0.01))
		{
		printf(",%.f",a[k4]);}
		
	}
  return 0;
}