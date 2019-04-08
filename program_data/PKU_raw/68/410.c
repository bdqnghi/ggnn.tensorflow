void main( )
{int i,j,k1,k2,a1,a2,n;
 scanf("%d",&n);
  for( i=6;i<=n;i+=2)
  {int a=i;
   for(j=3;j<=a;j+=2)
   { a1=j,a2=a-j;
     {for(k1=3;k1<=sqrt(a1);k1+=2) 
		 if(a1%k1==0) 
			 break;
	  for(k2=3;k2<=sqrt(a2);k2+=2) 
		  if(a2%k2==0) 
			  break;
	  if(k1>sqrt(a1)&&k2>sqrt(a2))
	  {printf("%d=%d+%d\n",a,a1,a2);
	  break;}
	}
   }
  }
} 