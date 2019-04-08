int main()
{int n,n1;
 scanf("%d",&n);
 A:for(n1=1;n1<=n;n1++)
 {
  char a[21];
  int i,z=0;
  scanf("%s",a);
 
  

  for(i=0;i<=strlen(a)-1;i++)
   {if((a[i]<48||(a[i]>57&&a[i]<65)||(a[i]>=91&&a[i]<=96)||a[i]>122)&&a[i]!='_')            
                         {z=1;printf("no\n");break;}
    }
   if(a[0]<65) {if(z==0) {printf("no\n");z=1;}}
  if(z==0) printf("yes\n");
  }
}