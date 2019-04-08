int main ()
{
    int a[100][100]; 
    int b[100][100]; 
    int c[100][100]; 
    int x1,y1,x2,y2;
    int i=0,k=0,d=0,e=0,f=0,g,j,h,l;  
    scanf ("%d %d",&x1,&y1);
    for (i=0;i<x1;i++)
    { for (k=0;k<y1;k++)
      scanf ("%d",&a[i][k]);
        } 
    scanf ("%d %d",&x2,&y2);
    for (j=0;j<x2;j++)
    {  for ( l=0;l<y2;l++)
      scanf ("%d",&b[j][l]);
        } 
    for (d=0;d<x1;d++)
    {   for (e=0;e<y2;e++)
         {    for (f=0;f<x2;f++)
               { c[d][e]=c[d][e]+a[d][f]*b[f][e];  } 
                 } 
            } 
    for ( g=0;g<x1;g++) 
    { 
    printf ("%d",c[g][0]); 
        for ( h=1;h<y2;h++)
    { 
         
     printf (" %d",c[g][h]);
     }
     printf ("\n"); } 
    }
