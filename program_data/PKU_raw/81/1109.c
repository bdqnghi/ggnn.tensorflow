int j[5][5];
int change()
{
	 int i,m,n,k,l;
	 int z[5];
	    for(k=0;k<5;k++)
   {
	   for(l=0;l<5;l++) scanf("%d",&j[k][l]);
   }
   scanf("%d%d",&m,&n);
     if(m<0||m>4||n<0||n>4) return 0;
	 else
	 {
		 for(i=0;i<5;i++) z[i]=j[m][i];
		 for(i=0;i<5;i++) j[m][i]=j[n][i];
		 for(i=0;i<5;i++) j[n][i]=z[i];
		 return 1;
	 }
	 
}
void main()
{
   int fh,k,l;
   fh=change();
   if(fh==0) printf("error");
   else
   {
	for(k=0;k<5;k++)
   {
		printf("%d",j[k][0]);
		for(l=1;l<5;l++) printf(" %d",j[k][l]);
	   printf("\n");
   }
   }
}

		