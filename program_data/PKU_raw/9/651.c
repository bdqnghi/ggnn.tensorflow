int main()
{
      int n,i,age[100],a,ageb[100],c,t,m;
      char ID[100][100],IDb[100][100],IDc[100];
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
                      scanf("%s %d",ID[i],&age[i]);
      }
      i=0;
      c=0;
      while(i<n)
      {
                if(age[i]>=60)
                { 
                ageb[c]=age[i];
                strcpy(IDb[c],ID[i]);
                c++;
                }
                i++;
      }
      for(i=0;i<=c-1;i++)
         for(a=0;a<c-i-1;a++)
         if(ageb[a]<ageb[a+1])
         {
                t=ageb[a];
                strcpy(IDc,IDb[a]);
                ageb[a]=ageb[a+1];
                strcpy(IDb[a],IDb[a+1]);
                ageb[a+1]=t;
                strcpy(IDb[a+1],IDc);     
         }
         for(i=0;i<=c-1;i++)
         printf("%s\n",IDb[i]);
         i=0;
         while(i<n)
         {
                if(age[i]<60)
                printf("%s\n",ID[i]);
                i++; 
         }
         getchar();
         getchar();
}
