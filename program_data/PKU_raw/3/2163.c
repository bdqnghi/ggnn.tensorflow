int main()
{
  int n,k,a[1001],b=0,c=0;
  scanf("%d %d",&n,&k);
  for(int i=0;i<n;i++)
     {scanf("%d",&a[i]);}
  for(int j=0;j<n;j++)
     {for(int m=n-1;m>=1;m--)
          {if(a[m]+a[j]==k&&m!=j)
              {printf("yes");
                 b=a[m];c=a[j];
				 break;}
           
  if(b+c==k)break;
  if(j==n-1){printf("no");break;}
  }}
	  return 0;}