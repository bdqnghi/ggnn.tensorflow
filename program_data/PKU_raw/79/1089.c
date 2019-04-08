main()
{
      int n[99],m[99],a=0,k=0,b=0,i=0,j=0,h=0,l=0,c=0,e=0;
      for(i=0;i<99;i++)
      {
           n[i]='\0';
           m[i]='\0';
      }
      for(i=0;i>=0;i++)
      {           
           scanf("%d %d",&n[i],&m[i]);
           if(m[i]==0)
           break;
      }
      c=i-1;
      for(i=0;i<=c;i++,a=-1)
      {
           int o[n[i]];
           for(j=0;j<n[i];j++)
           o[j]=1;        
           b=(n[i]);
           e=(m[i]);
           for(k=0;k!=b-1;k++,e=(m[i]))
           {        
                for(l=a;e!=0;l++)
                {
                     if(l==b)
                     l=0;
                     if(o[l]==1)
                     e--;
                }
                o[l-1]=0;
                a=l;

           }
           for(l=0;l<b;l++)
           {
                if(o[l]==1)
                {
                     int d=l+1;
                     printf("%d\n",d);
                     break;           
                }                   
           }
      }
      return 0;        
}
