int comp(const void *p, const void *q)
{
    return (*(int *)q - *(int *)p);
}
int main()
{
 int n[50],tianji[50][1000],qiwang[50][1000],result[50],i,j,ii,jj,max,max0,nmax,cmax,cnmax;
 int tb,tm,qb,qm;
 i=0;
 while(1)
 {scanf("%d",&n[i]);
 if (n[i]==0) break;
 for (j=0;j<n[i];j++)
    scanf("%d",&tianji[i][j]);

 for (j=0;j<n[i];j++)
    scanf("%d",&qiwang[i][j]);
  qsort(tianji[i], n[i], sizeof(int), comp);
  qsort(qiwang[i], n[i], sizeof(int), comp);
  i++;
 }

 for (ii=0;ii<i;ii++)
{   result[ii]=0;
    tb=0;
    tm=n[ii]-1;
    qm=n[ii]-1;
    qb=0;
    for (j=n[ii]-1;j>=tb;j--)
    {

        if(tianji[ii][j]>qiwang[ii][qm])
          {
          tm--;
          qm--;
          result[ii]=result[ii]+200;

          }
          else if (tianji[ii][j]<qiwang[ii][qm])
             {tm--;
             qb++;
             result[ii]=result[ii]-200;;
             }
             else if (tianji[ii][j]==qiwang[ii][qm])
             {
                while(tianji[ii][tb]>qiwang[ii][qb])
                   {tb++;
                   qb++;
                   result[ii]=result[ii]+200;
                   }
                  if(tianji[ii][tb]<qiwang[ii][qb])
                      {tm--;
                      qb++;
                      result[ii]=result[ii]-200;
                      }
                  else if(tianji[ii][tb]==qiwang[ii][qb]&&j>tb)
                      {
                       if(tianji[ii][j]<qiwang[ii][qb])
                       result[ii]=result[ii]-200;
                        qb++;tm--;
                       }

                      }
        }
      printf("%d\n",result[ii]);
      getchar();
      getchar();
      getchar();
    }
return 0;
}