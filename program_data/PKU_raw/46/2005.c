
int main(int argc, char *argv[])
{int array[100][100];
int row,col,i,j,rowmin,rowmax,colmin,colmax;
scanf("%d%d",&row,&col);
for(i=0;i<row;i++)
for(j=0;j<col;j++)
scanf("%d",&array[i][j]);
rowmin=0;
rowmax=row-1;
colmin=0;
colmax=col-1;
while(colmin<colmax&&rowmin<rowmax){
for(i=colmin;i<colmax;i++)        
printf("%d\n",array[rowmin][i]); 
for(i=rowmin;i<rowmax;i++)
printf("%d\n",array[i][colmax]);       
for(i=colmax;i>colmin;i--)
printf("%d\n",array[rowmax][i]);
for(i=rowmax;i>rowmin;i--)
printf("%d\n",array[i][colmin]);
rowmin++;
rowmax--;
colmin++;
colmax--;}
if(rowmin==rowmax&&colmin<colmax)
{for(i=colmin;i<=colmax;i++)
printf("%d\n",array[rowmin][i]);}
else if(rowmin<rowmax&&colmin==colmax)
{for(i=rowmin;i<=rowmax;i++)
printf("%d\n",array[i][colmin]);
     }
else if(rowmin==rowmax&&colmin==colmax)
printf("%d\n",array[rowmin][colmax]);
  
  return 0;
}
