int so(int x)
{
  int i,soo=1;
  for(i=1;i<10;i++)
  { 
	  if((x/2)!=0)
  {x=(int)x/2; soo++;}
      else break; 
  }
      return(soo);
}

void main()
{
      int a,b,i,t,w,r,n;
      int c[1001],d[1001];

      scanf("%d%d",&a,&b);


      i=so(a);t=so(b);
      for(c[0]=a,w=0;w<i-1;w++)
	  {   
              if(c[w]%2==0)
             c[w+1]=c[w]/2;
          else c[w+1]=(c[w]-1)/2;
	  }
   
    for(d[0]=b,r=0;r<t-1;r++)
    {   
             if(d[r]%2==0)
             d[r+1]=d[r]/2;
          else d[r+1]=(d[r]-1)/2;
	}

if(c[0]==d[0])
printf("%d",c[0]);
else {       
 for(n=0;n<=t;n++)
			if(c[i-n-1]!=d[t-n-1])
			{
				printf("%d",c[i-n]);
                break;
			}
		
 }
}
