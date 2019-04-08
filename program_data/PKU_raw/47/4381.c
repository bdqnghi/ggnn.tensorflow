void main()
{int n,*p,i=0,*q;
 scanf("%d",&n);
 p=(int*)malloc(sizeof(int)*n);
 q=(int*)malloc(sizeof(int)*n);
 for(i=0;i<n;i++)
 {scanf("%d",&p[i]);
 }
 for(i=0;i<n;i++)
 {*(q+n-i-1)=*(p+i);
 }
 for(i=0;i<n-1;i++)
 {printf("%d ",q[i]);
 }
 if (i==n-1)
 printf("%d",q[i]);
}