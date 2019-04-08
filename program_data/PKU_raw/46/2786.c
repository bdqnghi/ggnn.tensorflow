main()
{int i,j,k,m,n,p,q,s;
 scanf("%d %d",&m,&n);
 struct{int k;int p;}shu[m+2][n+2];
 
 for(i=1;i<=m;i++)
  {for(j=1;j<=n;j++)
    {scanf("%d",&shu[i][j].k);shu[i][j].p=1;}}
 
 for(j=0;j<=(n+1);j++)
  shu[0][j].p=0;
 for(j=0;j<=(n+1);j++)
  shu[m+1][j].p=0;
 for(i=0;i<=(m+1);i++)
  shu[i][n+1].p=0; 
 for(i=0;i<=(m+1);i++)
  shu[i][0].p=0; 

 // for(i=0;i<(m+2);i++)
  //{for(j=0;j<(n+2);j++)
  //printf("%d\n",shu[i][j].p);}
 for(i=1,j=1,s=1;;)
 {
 for(;;)
  {if(shu[i][j].p==1) 
       {printf("%d\n",shu[i][j].k);shu[i][j].p=0;j++;}
   else {if((shu[i][j].p==0)&&(shu[i][j-2].p==0)&&(shu[i-1][j-1].p==0)&&(shu[i+1][j-1].p==0))
         {s=0;break;}
         else {i=i+1;j=j-1;break;}
        }
  }
 for(;;)  
  { if(shu[i][j].p==1)
       {printf("%d\n",shu[i][j]);shu[i][j].p=0;i++;}
    else { if((shu[i][j].p==0)&&(shu[i-2][j].p==0)&&(shu[i-1][j+1].p==0)&&(shu[i-1][j-1].p==0))
                 {s=0;break;}
          else {i=i-1;j=j-1;break;}     
         }
  } 
 for(;;)
 {  if(shu[i][j].p==1)
    {printf("%d\n",shu[i][j]);shu[i][j].p=0;j--;}
    else  {if((shu[i][j].p==0)&&(shu[i][j+2].p==0)&&(shu[i-1][j+1].p==0)&&(shu[i+1][j+1].p==0))
             {s=0;break;}
           else {j++;i--;break;}
          }
 }
 for(;;)
 {  if(shu[i][j].p==1)
    {printf("%d\n",shu[i][j]);shu[i][j].p=0;i--;}
    else {if((shu[i+2][j].p==0)&&(shu[i][j].p==0)&&(shu[i+1][j+1].p==0)&&(shu[i+1][j-1].p==0))
         {s=0;break;}
          else {j++;i++;break;}
         }
 }
 if(s==0) break;
 
 }
}
