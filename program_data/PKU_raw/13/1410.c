int main()
{int a[20002]={1},n,i,j,k;
scanf("%d",&n);
scanf("%d",&a[1]);
printf("%d",a[1]);
 for(i=2;i<=n;i++)
 { scanf("%d",&a[i]);
    k=0;
   for(j=i-1;j>0;j--)
   {if (a[i]==a[j])break;
   else k=k+1;}
    if(k==i-1)printf(" %d",a[i]);
 }
   
 
 return 0;
}