void Qsort(int a[],int low,int up)
{
    int i,j,k,x;
    if (low>=up) return;
    else
    {
        k=a[low];
        j=low;
        for (i=low;i<=up;i++)
        {
            if (a[i]>k)
            {
                j++;
                x=a[i];
                a[i]=a[j];
                a[j]=x;
            }
        }
    }
    x=k;
    a[low]=a[j];
    a[j]=x;
    Qsort(a,low,j-1);
    Qsort(a,j+1,up);
    
}

int main(void)
{
    int n[100]={0},a[1000]={0},b[1000]={0};
    int i,j,m,w,l,d,q1,s1,q2,s2,money;   //w???????l???????d?????? ,q?????????s???????? 
    i=w=l=d=q1=s1=q2=s2=0;
    scanf("%d",&n[i]);
    while(n[i]!=0)
    {
      for(j=0;j<n[i];j++)
      {scanf("%d",&a[j]);}
      for(j=0;j<n[i];j++)
      {scanf("%d",&b[j]);}
      
   // m=i;   //??????? ?????????
    
    //for(i=0;i<m;i++)
    Qsort(a,0,n[i]-1);
    Qsort(b,0,n[i]-1);
       while((w+l+d)!=n[i])
       {
          if(a[n[i]-1-s1]>b[n[i]-1-s2])
          {w++;s1++;s2++;}
          else if(a[n[i]-1-s1]<b[n[i]-1-s2])
          {l++;s1++;q2++;}
          else if(a[q1]>b[q2])
          {w++;q1++;q2++;}
          else if(a[q1]<b[q2])
          {l++;s1++;q2++;}
          else if(a[q1]==b[q2])
          {if(a[n[i]-1-s1]<b[q2]){l++;s1++;q2++;}
           else{d++;s1++;q2++;}}
       }
       money=(w-l)*200;
       s1=q1=s2=q2=w=l=d=0;
       printf("%d\n",money);
    i++;scanf("%d",&n[i]);
    }
                  
}
