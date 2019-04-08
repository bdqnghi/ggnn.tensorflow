


void sort(int a[1005],int n)
{
   int i,j,k,temp;
   for(i=0;i<n-1;i++)
   {
     k=i;
	 for(j=i+1;j<n;j++)
		 if(a[j]>a[k])k=j;
		 if(k!=i)
		 {
		 temp=a[i];a[i]=a[k];a[k]=temp;
		 }
   
   }

}

void main()
{
  int n,i,j,head,ans,tailt,tailk;
  int m;
  int t[1005],k[1005];
  while(1)
  {
  scanf("%d",&n);
  if(n==0)break;
  for(i=0;i<n;i++)
	  scanf("%d",&t[i]);
  for(i=0;i<n;i++)
	  scanf("%d",&k[i]);
  sort(t,n);sort(k,n);
  head=0;ans=0;tailt=n-1;tailk=n-1;
  for(i=0;i<n;i++)
        {
            if(t[head]>k[i])
            {
                head++;
                ans+=200;
            }
            else if(t[head]<k[i])
            {
                tailt--;
                ans-=200;
            }
            else if(t[head]==k[i])
            {
                for(j=tailt,m=tailk;j>=head;j--,m--)
                {
                    if(t[j]>k[m])
                    {
                        ans+=200;
                        tailt--;
                        tailk--;
                    }
                    else
                     {
                           if(t[j]<k[i]) ans-=200;
                          tailt=--j;
                          tailk=m;
                          break;              
                     }
                }
            }

            if(head>tailt) break;
        }

   printf("%d\n",ans);


  }
}