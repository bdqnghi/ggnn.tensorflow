
int main()
{ 
	int m,n;
	int a[8][8]={0};
   scanf("%d,%d\n",&m,&n);
   int i,j;
    int w=0;
	int l1[8]={0},l2[8]={0};
   for(i=0;i<m;i++)
   {
	   
	   for(j=0;j<n;j++)
	   {
	   scanf("%d",&a[i][j]);
	   }

   } 
   
   for(i=0;i<m;i++)
   {
	   int max=0;
	   for(j=0;j<n;j++)
	   {
		   if(max<a[i][j]) {
			   max = a[i][j];
			   l1[i]=j;
		   }
		}
   }     
   for(j=0;j<n;j++)
   {
	   int min = 100000;
	  for(i=0;i<m;i++)
	   {
		  if(min>a[i][j]) {
			  min = a[i][j];
			   l2[j]=i;
		  }
		}
	  if (l1[l2[j]] == j){
		  printf("%d+%d", l2[j], j);
		  return 0;
	  }
   }
   printf("No");
   return 0;
}
