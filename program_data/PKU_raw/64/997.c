int main()
{int n,i=0,j,p,q;
int a[10][3];
double b[50],k,m;
scanf("%d",&n);
for(i=0;i<n;i++)
{ 
   for(j=0;j<3;j++)
       {scanf("%d",&a[i][j]);}
}
i=0;
  for(p=0;p<n-1;p++)
    { for(q=p+1;q<n;q++)
          {b[i]=1.0*sqrt((a[p][0]-a[q][0])*(a[p][0]-a[q][0])+(a[p][1]-a[q][1])*(a[p][1]-a[q][1])+(a[p][2]-a[q][2])*(a[p][2]-a[q][2]));
          i++;}
     }
int index = i;
for(j=index-1;j>0;j--)
{
    for(i=0;i<j;i++)
        {if(b[i]>b[i+1])
            {k=b[i];
             b[i]=b[i+1];
             b[i+1]=k;
             }
         }
}

b[n*(n-1)/2]=-1;
for(i=n*(n-1)/2;i>=0;i--)
{if(b[i]!=b[i+1])
   {
     for(p=0;p<n;p++)
        { for(q=p+1;q<n;q++)
             {m=1.0*sqrt((a[p][0]-a[q][0])*(a[p][0]-a[q][0])+(a[p][1]-a[q][1])*(a[p][1]-a[q][1])+(a[p][2]-a[q][2])*(a[p][2]-a[q][2]));
                if(m==b[i])
                  {printf("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n",a[p][0],a[p][1],a[p][2],a[q][0],a[q][1],a[q][2],m);}
              }
         }
    }
}
return 0;
}
