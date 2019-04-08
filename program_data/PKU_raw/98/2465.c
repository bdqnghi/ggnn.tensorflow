int main()
{
    int n,i,wl,len=0;
    char w[64],p[64]="";
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
         printf(p);
         scanf("%s",w);
         wl=strlen(w);
         if(len+wl>80)
         {
             printf("\n");
             len=0;
         }
         else if(i>0)
         {
              printf(" ");
         }
         len+=wl+1;
         strcpy(p,w);
    } 
         printf(p);
         getchar();
         getchar();
         getchar();
         return 0;
} 
     