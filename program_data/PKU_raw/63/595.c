
void main()
{  int h1,l1,h2,l2;
   int i,j;
   int x;
   int shuzu1[100][100];
   int shuzu2[100][100];
   int shuzu3[100][100];

   scanf("%d %d",&h1,&l1);
   for(i=0;i<h1;i++)
	   for(j=0;j<l1;j++)
         scanf("%d",*(shuzu1+i)+j);
	   
	   scanf("%d %d",&h2,&l2);
   for(i=0;i<h2;i++)
	   for(j=0;j<l2;j++)
         scanf("%d",*(shuzu2+i)+j);

   for(i=0;i<h1;i++)
	   for(j=0;j<l2;j++)
		   for(shuzu3[i][j]=0,x=0;x<l1;x++)
			   shuzu3[i][j]= shuzu3[i][j]+*(*(shuzu1+i)+x)**(*(shuzu2+x)+j);

    for(i=0;i<h1;i++)
	   {for(j=0;j<l2;j++)
		   if(j!=l2-1)printf("%d ",shuzu3[i][j]);
		    else printf("%d",shuzu3[i][j]);

           if(i!=h1-1)printf("\n");                          
    }
}
