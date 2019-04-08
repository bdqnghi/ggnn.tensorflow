main()
{
   char a[100],b[100],c[20][100];
   int n,i,j,j1,j2,lena,lenb;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
      scanf("%s",a);
	  scanf("%s",b);
	  lena=strlen(a);
	  lenb=strlen(b);
	  j=0;
	  for(j1=lena-1,j2=lenb-1;j2>=0;j1--,j2--)
	  {
		 if(j==1)  a[j1]=a[j1]-j;
                   j=0;
		 if(a[j1]<b[j2])
		 {
		   a[j1]=a[j1]+10-b[j2]+'0';
		   j=1;
		 }
		 else  a[j1]=a[j1]-b[j2]+'0';
	  }
	  if(j==1) a[j1]=a[j1]-j;
	  for(j1=0;j1<lena;j1++)
	  {
		  if(a[j1]!='0') break;
	  }
	  for(j=j1,j2=0;j<lena;j++,j2++)
	     c[i][j2]=a[j];
	  c[i][j2]='\0';
   }
   for(i=0;i<n;i++)
     printf("%s\n",c[i]);
   
}
