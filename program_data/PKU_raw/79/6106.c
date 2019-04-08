void main()
{int i,k,q[100],t,r,n[100],m[100],num[300],*p;
for(t=0;t<100;t++)
{ scanf("%d",&n[t]);
  scanf("%d",&m[t]);
 if(n[t]==0&&m[t]==0)
  break;
}
 
for(r=0;r<t;r++)
{p=num;
 for(i=0;i<n[r];i++)
 *(p+i)=i+1;
  i=0;
  k=0;
  q[r]=0;
 while(q[r]<(n[r]-1))
  {if(*(p+i)!=0)
      k++;
   if(k==m[r])
   {*(p+i)=0;
    k=0;
    q[r]++;
    }
    i++;
    if(i==n[r])
    i=0;
    }
while(*p==0)
p++;
printf("%d\n",*p);
}
}
