main()
{  char a[1020];
   scanf("%s",a);
   int t,j;
   t=strlen(a);
   int i;
   int b[1020],k,h=0;
   if(t==1&&(a[0]-'a')>=0)
   printf("(%c,%d)",a[0]-32,1);
   else if (t==1&&(a[0]-'a')<=0)
   printf("(%c,%d)",a[i],1);      
   else
  { for(i=0;i<=t-2;)
  { for(i=h,k=1;i<=t-2;i++)
   {if(a[i]-a[i+1]==0||a[i]-a[i+1]==32||a[i]-a[i+1]==-32)
    {  k=k+1;
        
    }
    else 
    break;
    
                      }
      h=i+1;  
   if(a[i]-'a'>=0)
    printf("(%c,%d)",a[i]-32,k);
    else
    printf("(%c,%d)",a[i],k);                    
}                 
   }    }
