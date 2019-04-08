int main()
{
   char zf1[257],zf2[257],zf3[257];
   int len1,len2,len3,i,k,t,m,fa=0;
   scanf("%s%s%s",zf1,zf2,zf3);
   len1=strlen(zf1);
   len2=strlen(zf2);
   len3=strlen(zf3);
   for(i=0;i<len1;i++)
   {
       for(k=0;k<len2;k++)
       {
           if(zf2[k]!=zf1[i+k])
           {
                t=0;
                break;
            }
            else
           {
                t++;
            }
       }
       if(t==len2)
       {
           m=i;
           fa=1;
       }
        if(fa==1)
        {
         break;
        }
   }
   if(fa==1)
   {
    for(i=0;i<m;i++)
    {
     printf("%c",zf1[i]);
    }
    printf("%s",zf3);
    for(i=m+len2;i<len1;i++) 
    {
     printf("%c",zf1[i]);
    }
   }
   if(fa==0)
   {
       printf("%s",zf1);
   }
   return 0;
}
 

