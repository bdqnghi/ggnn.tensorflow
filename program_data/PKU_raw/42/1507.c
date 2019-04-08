int main()
{int n,v[100000],k,p=0,t=0;
 scanf("%d",&n);
 for(int i=0;i<=n-1;i++)
  {
    scanf("%d",&v[i]);
  }
 scanf("%d",&k);
 for(int j=0;j<=n-1;j++)
  {
    if(v[j]!=k)
    {p++;}  
         
  } 
 for(int l=0;l<=n-1;l++)
 {if(v[l]!=k)
  {t++;
   if(t==p){printf("%d",v[l]);}
   else {printf("%d ",v[l]);}
   }
 
 }
  
 return 0;  

}
