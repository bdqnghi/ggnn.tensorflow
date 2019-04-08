main()
{
int t,i,u,k,m,y,x,min,a[100002];
char str[100002];
scanf("%d",&t);
for(i=0;i<t;i++)
{
                scanf("%s",&str);
                u=strlen(str);
            for(k=0;k<u;k++)
              { a[k]=0;
                for(m=0;m<u;m++)
                {
                if(str[m]==str[k])
                a[k]++;
                }
              }
            for(y=0,min=a[0],x=0;x<u;x++)
            {
               if(a[x]<min)
               {min=a[x];
                y=x;}
            }
            if (min==1)
            printf("%c\n",str[y]);
            if (min>1)
            printf("no\n");
            
}
}
