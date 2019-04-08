void main()
{int a[301]={0},i,k,n,m;
 char c;
 i=0;
 scanf("%d",&a[0]);
 for(i=1;;i++)
 {scanf("%c",&c);
  if(c=='\n')
	  break;
  else
   scanf("%d",&a[i]);
 }
 k=a[0];
 n=i;

    for(i=0;i<n;i++)
      {if(a[i]>k)
        k=a[i];
       }
 m=0;
    for(i=0;i<n;i++)
      {if(a[i]>m&&a[i]<k)
        m=a[i];
       }
if(m!=0)
  printf("%d",m);
else
 printf("No");
}

 