
int main()


{

 int x,y;
    scanf("%d",&x);
	scanf(",");
	scanf("%d",&y);
       int i,j,k,b=0,a[99][99];


       for (i=0;i<x;i++)


       {


             for (j=0;j<y;j++) 
			{
				scanf("%d",&a[i][j]);
			}

       }


       for (i=0;i<x;i++)
       {
              for (j=0;j<y;j++)
              {
                     for (k=j+1;k<y;k++)
                     {
                            if (a[i][j]<a[i][k]) 
							{break;}
                     }
                     if (k==y) {break;}
				}
			 for (k=0;k<x;k++)
              {
				  if (a[i][j]>a[k][j]) {break;}
              }
              if (k==x) {printf("%d+%d",i,j);}
			  else b+=1;
			  if (b==x) {printf("No");};
       }

   

return 0;
}
