main()
{    char string[502],str[502][6];
     int a[502],x,u,n,v,max,t,p;
     scanf("%d",&n);
     scanf("%s",&string);
     x=strlen(string);
      for(u=0;u<x-n+1;u++)
      {
        for (v=0;v<n;v++)
          str[u][v]=string[u+v];
      }
      for(u=0;u<x-n+1;u++)
         a[u]=0; 
      for(u=0;u<x-n+1;u++)
        {for(v=0;v<x-n+1;v++)
         {if(strcmp(str[u],str[v])==0)
          a[u]++;
         }
        }
      max=a[0];t=0;
      for(u=0;u<x-n+1;u++)
        {if(a[u]>max)
           {max=a[u];
            t=u;}
        }
      
      if(max>1)
      { printf("%d\n",max);
        p=1;
        if(a[0]==max&&p==1)
        printf("%s\n",&str[0]);
        for(u=1;u<x-n+1;u++)
        {p=0;
         for(v=u-1;v>=0;v--)
         {if(strcmp(str[u],str[v])!=0)
            p=1;
          else
           {p=0;
            break;
           }
          }
         if(a[u]==max&&p==1)
         printf("%s\n",&str[u]);
        }
      }
      if(max==1)
      printf("NO\n");
}
