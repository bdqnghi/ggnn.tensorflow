
main()
{int square[9][9]={0};
int squ[9][9]={0};
 int m,n,i,j,k,t,q;
 scanf("%d",&m);
 scanf("%d",&n);
 square[4][4]=squ[4][4]=m;
 for(i=1;i<=n;i++)
 {for(j=0;j<=8;j++)
 {for(k=0;k<=8;k++)
    if (square[j][k]!=0)
	{squ[j][k]=squ[j][k]+square[j][k];
     squ[j][k+1]+=square[j][k];
	 squ[j][k-1]+=square[j][k];
	 squ[j+1][k]+=square[j][k];
	 squ[j+1][k+1]+=square[j][k];
	 squ[j+1][k-1]+=square[j][k];
	 squ[j-1][k]+=square[j][k];
	 squ[j-1][k+1]+=square[j][k];
	 squ[j-1][k-1]+=square[j][k];
	}
 }
  for(t=0;t<=8;t++)
     for(q=0;q<=8;q++)
	 {   
	 square[q][t]=squ[q][t];}
 }
 for(t=0;t<=8;t++)
 {for(q=0;q<=7;q++)
 printf("%d ",square[t][q]);
 printf("%d",square[t][8]);
 printf("\n");
 }
}