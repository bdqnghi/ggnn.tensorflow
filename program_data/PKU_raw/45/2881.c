int main()
{
    char c1[51],c2[51];
    char *pc1,*pc2;
    int f=0,i,j,F=0;
    scanf("%s",c1);
    scanf("%s",c2);
    pc1=c1;
    pc2=c2;
   for(i=0;c2[i]!='\0';i++)
   {
       if(c1[0]=c2[i])
       {
           f=i;
           for(j=0;c1[j]==c2[i+j];j++)
           {
               if(j==(strlen(c1)-1))
                  {
               printf("%d",f);
               F=1;
               break;
                  }
           }
       }
       if(F==1)
       break;
   }
    return 0;
}
