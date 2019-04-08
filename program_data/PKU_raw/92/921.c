main()
{
      int n,i,j,t,tian[1000],qi[1000],vic=0;
      scanf("%d",&n);
      while(n!=0)
      {
           int head1=0,head2=0,end1=n-1,end2=n-1;
           for(i=0;i<n;i++) scanf("%d",&tian[i]);
           for(i=0;i<n;i++) scanf("%d",&qi[i]);
           for(i=0;i<n-1;i++) for(j=i;j<n;j++) {if(tian[i]<tian[j]) {t=tian[i];tian[i]=tian[j];tian[j]=t;} if(qi[i]<qi[j]) {t=qi[i];qi[i]=qi[j];qi[j]=t;}}
           for(i=0;i<n;i++)
           {
                if(tian[head1]>qi[head2]) {vic++;head1++;head2++;}
                else if(tian[end1]>qi[end2]) {vic++;end1--;end2--;}
                else if(tian[head1]<=qi[head2]) { if(tian[end1]<qi[head2]) {vic--;end1--;head2++;} else {end1--;head2++;} }
                else if(tian[end1]<=qi[end2]) {vic--;end1--;head2++;}    
           }
           printf("%d\n",vic*200);
           scanf("%d",&n);
           vic=0;
      }
}

