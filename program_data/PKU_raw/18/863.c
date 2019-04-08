int main()
{
 int a[20000],b[20000],min,i,j,k,num,sum,n,m,x,y;
 cin>>n;
 for (num=1;num<=n;num++)
 {
 memset(b,0,sizeof(b));
 for (i=0;i<n;i++)
     for (j=0;j<n;j++)
          {cin>> *(b+i*n+j);

          }

 sum=0;
 for (k=n;k>1;k--)
     { memset(a,0,sizeof(a));
       for (i=0;i<k;i++)
            for (j=0;j<k;j++)
                 *(a+i*k+j)=*(b+i*k+j);



       for (i=0;i<k;i++)
           {min=3000;
            for (j=0;j<k;j++)
                 if (*(a+i*k+j)<min)
                     min=*(a+i*k+j);
            for (j=0;j<k;j++)
                 *(a+i*k+j)=*(a+i*k+j)-min;
      }
      for (j=0;j<k;j++)
           { min=3000;
            for (i=0;i<k;i++)
                 if (*(a+i*k+j)<min)
                     min=*(a+i*k+j);
            for (i=0;i<k;i++)
                 *(a+i*k+j)=*(a+i*k+j)-min;
           }

     memset(b,0,sizeof(b));
     sum=sum+a[k+1];
     x=-1;
     for (i=0;i<k;i++)
         { if (i!=1)
             {x++;
              y=-1;
              for (j=0;j<k;j++)
                   if (j!=1)
                       {
                        y++;
                        *(b+x*k+y-x)=*(a+i*k+j);
                        }


 }}


}
cout<<sum<<endl;
}
return 0;
}
