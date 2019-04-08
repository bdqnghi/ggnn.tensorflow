int main()
{int m,p,q,i,j;
 scanf("%d",&m); 
 for(i=3;i<=(m/2);i=i+2)
 {
	 {
	 for(j=2;j<=sqrt(i);j++)
	 if(i%j==0)break;
     if(j>sqrt(i)) p=1;
	 else p=0;
     for(j=2;j<=sqrt(m-i);j++)
	 if((m-i)%j==0)break;
     if(j>sqrt(m-i))
		 q=1;
	 else q=0;
	 }
  if(p==1&&q==1)printf("%d %d\n",i,m-i);
}
return 0;
}
