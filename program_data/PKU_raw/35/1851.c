void main()
{
   int a[9][9];
   int hang,lie;
   int i,j;
   scanf("%d,%d",&hang,&lie);
   for(i=0;i<hang;i++)
   {
     for(j=0;j<lie;j++)
      scanf("%d",&a[i][j]);
   }
   int k=0,x,l;
   int f=1;
for(i=0;i<hang;i++)
	{
       for(j=0;j<lie;j++)
	   {
		   if(a[i][j]>k){k=a[i][j];x=j;}
	   }
	   int flag=1;
       for(l=0;l<hang;l++)
	   {
		   if(k>a[l][x]) flag=0;
	   }
	   if(flag==1){printf("%d+%d",i,x);f=0;break;}
	}
if(f) printf("No");
}