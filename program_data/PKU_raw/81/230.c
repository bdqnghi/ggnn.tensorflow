int main()
{
  int m,n,a,b,c,i,j,u[5][5];
  for(i=0;i<5;i++)
    {for(j=0;j<5;j++)
       {scanf("%d ",&u[i][j]);}
     }
    scanf("%d %d",&n,&m);
    if(m>=0&&m<=4&&n>=0&&n<=4)
      {for(i=0;i<5;i++)
          {a=u[m][i];
           u[m][i]=u[n][i];
           u[n][i]=a;
           }  for(i=0;i<5;i++){printf("%d %d %d %d %d\n",u[i][0],u[i][1],u[i][2],u[i][3],u[i][4]);}
  
       }
    else printf("error");
    return 0;
}

