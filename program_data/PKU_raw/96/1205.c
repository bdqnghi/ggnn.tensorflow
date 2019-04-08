main()
{
     char N[100];
     int sh[100]={0},i;
     gets(N);
     int n=strlen(N);
     int y=N[0]-'0'; 
     for(i=1;i<n;i++)
     {
         sh[i]=(y*10+N[i]-'0')/13;
         y=(y*10+N[i]-'0')%13;
     }
     if(sh[1]==0&&sh[2]==0) printf("0");
     else
     {
         int j=1;
         if(sh[j]==0) j++;
         for(;j<n;j++)
             printf("%d",sh[j]);
     }
     printf("\n%d\n",y);
} 
  