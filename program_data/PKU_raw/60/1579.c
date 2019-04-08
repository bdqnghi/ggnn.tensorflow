int main()
{
    int a,j,i,c,k,l;
    int b[100000];
    scanf("%d",&a);
    k=0;
    if(a>4)
  {  for(i=3;i<=a;i++)
    {c=0;
                     for(j=2;j<i;j++)
                     {
                                 if(i%j==0)
                                 c=1;    
                                     }
                                     if(c==0)
                                     {b[k]=i;
                                     k++;
                                             }
                     }
    for(i=1;i<k;i++)
    {l=b[i]-b[i-1];
    if(l==2)
    printf("%d %d\n",b[i-1],b[i]);
                    
                    }
                    }
                    else
                    printf("empty");
    getchar();
      getchar();
        getchar();
    
}