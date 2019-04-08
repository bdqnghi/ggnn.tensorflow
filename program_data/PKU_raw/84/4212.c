void main()
{int n,i,k,max1,max2,num[30];
 scanf("%d",&n);
 for(i=0;i<n;i++)
    scanf("%d",&num[i]);
 max1=num[0];
 k=0;
 for(i=1;i<n;i++)
    if(num[i]>max1)
         {max1=num[i];k=i;}
 if(k=0)
 {max2=num[1];
  for(i=2;i<n;i++)
    if(num[i]>max2)
         max2=num[i];
  }
else {max2=num[0];
      for(i=2;i<n;i++)
          if(num[i]>max2&&num[i]!=max1)
          max2=num[i];
     }
printf("%d\n",max1);
printf("%d\n",max2);
}

      