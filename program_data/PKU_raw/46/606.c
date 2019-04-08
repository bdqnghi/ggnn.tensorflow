void main()
{
int row=0,col=0;
int i=0,j=0,n=0,t=0;
scanf("%d%d",&row,&col);
int array[100][100];
for(i=0;i<row;i++)
   for(j=0;j<col;j++)
    scanf("%d",&array[ i ][ j ]);
   for (n=0;;n++)
   { 
    for (i=n;i<col-n;i++)
    {
     printf("%d\n",array[ n ][ i ]);
     t++;
    }
    
    if(t==row*col)
		break;
    for (j=n+1;j<row-n;j++)
    {
     printf("%d\n",array[ j ][col-n-1]);
     t++;
    }
    
    if(t==row*col)
		break;
    for (i=col-2-n;i>=n;i--)
    {
     printf("%d\n",array[row-n-1][ i ]);
     t++;
    }
   
    if(t==row*col)
		break;
    for (j=row-2-n;j>n;j--)
    {
     printf("%d\n",array[ j ][ n ]);
     t++;
    }
    
    if(t==row*col)
		break;
   }
  
} 