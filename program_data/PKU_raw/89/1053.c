main()
{   int n;
    int i,j;
    int flag=0;
    scanf("%d",&n);
    int*p=(int*)malloc(n*sizeof(int));
    for(int k=0;k<n;k++)
    {p[k]=0;
    }    
    for(;;)
   {scanf("%d %d",&i,&j);
    if ((i==0)&&(j==0))
    break;
    p[j]+=1;
   }
    for(int o=0;o<n;o++)
   {if(p[o]==n-1)
    {printf("%d\n",o);
     flag+=1;
    }
   }
   if(flag==0)
   printf("NOT FOUND");
}