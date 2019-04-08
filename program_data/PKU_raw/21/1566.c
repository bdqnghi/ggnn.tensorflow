void main()
{int n,i,t=0;float s=0;
 int m[300];
 scanf("%d",&n);
 for(i=0;i<n;i++)
  {scanf("%d",&m[i]);
   s=s+m[i];}
 float aver;
 aver=s/n;
  int k=0;
 for(i=1;i<n;i++)
  if(fabs(m[k]-aver)<fabs(m[i]-aver))
     k=i;
 for(i=0;i<n;i++)
  if(fabs(m[k]-aver)==fabs(m[i]-aver))
    {if(t)
     printf(",");
     printf("%d",m[i]);
     if(t==0)
      t++;
     }
}