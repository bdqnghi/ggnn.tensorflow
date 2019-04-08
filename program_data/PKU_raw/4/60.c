void main()
{
     int a,b,n,j,i,k,*hi,col,row,s,max;
     scanf("%d %d",&row,&col);
     s=row*col;

    int *p=(int*)malloc(10000*sizeof(int));
hi=p;
if(col>row)  max=col;
else  max=row;
for(i=0;i<s;i++)
scanf("%d",p+i);
for(j=0;j<col+row;j++)
 for(k=0;k<=j;k++) 
 if(j-k<col&&k<row)
   printf("%d\n",*(hi+j-k+col*k));
}