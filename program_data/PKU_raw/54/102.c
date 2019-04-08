void main()
{ int m,n,k,mark=0,i,num,l;
  scanf("%d%d",&n,&k);
  for(m=1;mark==0;m++)
   { num=0;l=m;
     for(i=0;i<n;i++)
	    { if(l%(n-1)==0)
	         {l=n*l/(n-1)+k;num++;}
          else break;
        } 
     if(num==n){printf("%d\n",l);mark=1;}
   }
}   