main()
{int a[9][9]={0};
 int b[9][9];
 int p,q,i,j,k,m,n,e,f,l;
 scanf("%d %d",&m,&n);
 a[4][4]=m;
for(l=0;l<n;l++)
{   for(i=0;i<9;i++)
       for(j=0;j<9;j++)
         b[i][j]=0;
    for(i=1;i<8;i++)
     {for(j=1;j<8;j++)
        {b[i][j]+=a[i][j];
           for(p=-1;p<2;p++)
             {for(q=-1;q<2;q++)
             b[i+p][j+q]+=a[i][j];}
        }
      }
   for(e=0;e<9;e++)    
     {for(f=0;f<9;f++)
      a[e][f]=b[e][f];
     }
}
 
 for(i=0;i<9;i++)
  {for(j=0;j<9;j++)
   {if(j<8) {printf("%d",a[i][j]);printf(" ");}
    else if(j==8) {printf("%d",a[i][j]);printf("\n");}
   }
  }
 
}
