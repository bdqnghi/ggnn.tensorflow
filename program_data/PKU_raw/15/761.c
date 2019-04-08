

int main()
{

	 int a[MAX][MAX];

	 int n;
	 int i,j;
	 int i1,j1,i2,j2,flag=1;

	 scanf("%d",&n);
      
	 for(i=0;i<n;i++)
	 {
		 for(j=0;j<n;j++)
		 {
            scanf("%d",&a[i][j]);
			if(flag==1 && a[i][j]==0)
			{
                 i1=i;
				 j1=j;
				 flag=0;
 
			}
				 
		 }


	 }

     flag=0;
	 for(i=n-1;i>=0;i--) {
		 for(j=n-1;j>=0;j--) {


           	if(a[i][j]==0)
			{
                 i2=i;
				 j2=j;
				 flag=1;
				 break;
 
			}




		 }

		 if(flag==1)
			  break;
		 
    }
	// printf("%d***%d***%d***%d\n",i1,j1,i2,j2);

    if((i2==i1+2) && (j2==j1+2) )
		 printf("%d",1);
	else printf("%d",(i2-i1-1)*(j2-j1-1));




 return 0;
} 