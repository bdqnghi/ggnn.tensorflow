int main(void)
{
   int n,i;
   float m[50],f[50],heigh;
   int mm=0;
   int fm=0;
   char name[10];
   int k;
   float temp;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
        scanf("%s %f",name,&heigh);
        if(name[0]=='m')
		{
		      m[mm]=heigh;
			  k=mm;
			  while((m[k]<m[k-1])&&k>0)
              {   
			        temp=m[k];
					m[k]=m[k-1];
                    m[k-1]=temp;
					k--;
			  }
			  mm++;
		}
		else
		{
			  f[fm]=heigh;
			  k=fm;
			  while((f[k]<f[k-1])&&k>0)
              {   
			        temp=f[k];
					f[k]=f[k-1];
                    f[k-1]=temp;
					k--;
			  }
              fm++;
		}
   }
   for(i=0;i<mm;i++)
	   printf("%.2f ",m[i]);
   for(i=fm-1;i>0;i--)
       printf("%.2f ",f[i]);
   printf("%.2f\n",f[0]);
   return 0;
}