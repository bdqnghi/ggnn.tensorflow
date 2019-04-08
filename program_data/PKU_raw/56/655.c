main()
{int a[6],l,i;

l=1;
 while(scanf("%1d",&a[l])==1)l++;
 l--;
 for(i=l;i>=1;i--)printf("%d",a[i]);
}
