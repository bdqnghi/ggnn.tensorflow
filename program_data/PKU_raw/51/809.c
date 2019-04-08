main ()
{
     short lens,i,j,k,n,top,pts,max;
     char s[501];
     char lib[500][500];
     short libc[500];
     
//     n=3;
     scanf("%d",&n);
     scanf("%s",&s);
     for (lens=1;s[lens]!='\0';lens++);lens--;
     top=0;
     for (i=0;i<=499;i++) libc[i]=0;
//for (i=0;i<=499;i++) for (j=0;j<=2;j++) lib[i][j]=0;
//     for (i=0;i<=2;i++)lib[0][i]=s[i]; 
//for (i=0;i<=lens;i++) printf("%c",s[i]);printf("\n");
//printf("%d\n",lens);


     for (pts=0;pts<=lens-n+1;pts++)
     {
         for (i=0;i<=top;i++)
         {
             for (j=0;j<=n-1;j++)
             {
//printf("check1 %c %c %d %d %d %d\n",lib[i][j],s[pts+j],i,j,pts,top);
                 if (lib[i][j]!=s[pts+j])
                 {
                    break;
                 }
             }
             if (j==n) 
             {
                libc[i]++;
//printf("j==1   %c %c %d %d %d %d\n",lib[i][j],s[pts+j],i,j,pts,top);
             }
         }
         if (j!=n)
         {
            top++;
            for (j=0;j<=n-1;j++) 
            {
                lib[top][j]=s[pts+j];
            }
            libc[i]++;            
         }
     }
//     top--;
/*
for (i=0;i<=top;i++)
{
    for (j=0;j<=2;j++)
        printf("%c ",lib[i][j]);
    printf("%d\n",libc[i]);
}   */
     
     max=0;
     for (i=0;i<=top;i++) 
         if (libc[i]>max) max=libc[i];
if (max==1) printf("NO");
else
{
     printf("%d\n",max);
     for (i=0;i<=top;i++)
         if (libc[i]==max)
         {
            for (j=0;j<=n-1;j++)
                printf("%c",lib[i][j]);
            printf("\n");
         } 
}
}
                
             
