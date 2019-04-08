main()
{int i;
for(i=0;i<1000;i++)
{int n,j,k,p;
scanf("%d",&n);
if(0==n)
break;
else
{int a[n],b[n];
 for(j=0;j<n;j++)
 scanf("%d",&a[j]);
 for(j=0;j<n;j++)
 scanf("%d",&b[j]); 
 for(j=0;j<(n-1);j++)
 {for(k=0;k<(n-1-j);k++)
 {if(a[k]<a[k+1])
 {p=a[k];a[k]=a[k+1];a[k+1]=p;}
  if(b[k]<b[k+1])
 {p=b[k];b[k]=b[k+1];b[k+1]=p;}
 }
 } //???????????????????? 
//for(j=0;j<n;j++)
//printf("%d %d\n",a[j],b[j]);
int a1=0,a2=n-1,b1=0,b2=n-1,q,r,s,t;//???? 
r=0;s=0;                                                                                                                                                                
for(q=0;q<n;q++)         
{if(a[a1]==b[b1])    //????????????? 
{if(a[a2]>b[b2]){r++;a2--;b2--;}
 else if(a[a2]<b[b2]){r--;a2--;b1++;}
 else if(a[a2]==b[b2])
{if(a[a2]<b[b1]){r--;a2--;b1++;}
 else if(a[a2]==b[b1]){break;}
}
}
else if(a[a1]>b[b1])     //?????????? 
{r++;a1++;b1++;}
else    {r--;a2--;b1++;} //????????? 
}
   s=r*200;
   printf("%d\n",s);
   r=0;s=0;
}}
} //?????C++?????????????……??????????????C??????
