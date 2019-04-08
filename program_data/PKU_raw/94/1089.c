 void main()
 {int i,j,n,x[500],temp;
  scanf("%d", &n);
  j=0;
  for (i=0;i<n;i++)
	  scanf("%d", &x[i]);
  for (i=0;i<n;i++)
  {if (x[i]%2==1)
      {x[j]=x[i];
       j++;}
  }
  n=j;
  for (i=0;i<n;i++)
	  {for(j=0;j<n-i-1;j++)
         {if (x[j]>x[j+1])
             {temp=x[j+1];
              x[j+1]=x[j];
			  x[j]=temp;
             }
          }
       }
  for (i=0;i<n;i++)
	  {if (i==0)
		  printf("%d", x[i]);
	  else printf(",%d", x[i]);
  }
 }