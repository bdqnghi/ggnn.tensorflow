
int main()
{
	int i=0,t=0,n[10000]={0},m,j,a[1000],b[1000],min,max;
	
   char c;
   do{
       scanf("%d",&a[i]);
	   i++;
       t++; 
   }while((c=getchar())!='\n');
   i=0;
   do{
       scanf("%d",&b[i]);
	   i++;
   }while((c=getchar())!='\n');
   min=a[0];
   for(i=0;i<t;i++)
	   if(a[i]<min) min=a[i];
   max=b[0];
   for(i=0;i<t;i++)
        if(b[i]>max)  max=b[i];

	for(i=min;i<max;i++)
       for(j=0;j<t;j++)
	   {
	       if((i+0.1)>a[j]&&(i+0.1)<b[j]) n[i]++;
	   
	   }
            m=n[min];
	   for(i=min;i<max;i++)
		   if(n[i]>m) m=n[i];

		printf("%d %d",t,m);
		return 0;
    
}
