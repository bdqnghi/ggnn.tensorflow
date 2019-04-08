
int main()
{
       int a[300];
       int i=0,n,max,max2;
	   char c=',';
	   while(c==',')
	   {
		   scanf("%d%c",&a[i],&c);
		   i++;
		   }
	   n=i;
		   
			   max=a[0];
		   for(i=0;i<n;i++)
			 if(a[i]>max) max=a[i];
			else continue;
				max2=0;
			for(i=0;i<n;i++)
			if(a[i]<max&&a[i]>max2)
				max2=a[i];
			else continue;
			if(max2>0)	
			printf("%d",max2);
			else printf("No");
		

return 0;
}

