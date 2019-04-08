
int main()
{  	int n,i,j,k,e,total,sum,afast,bfast,aslow,bslow;
         int a[1000],b[1000];
	while(1)
	{
	  scanf("%d",&n);
	  if (n==0)
            break;
   	  for(i=0;i<n;i++)
             scanf("%d",&a[i]);
	  for(i=0;i<n;i++)
             scanf("%d",&b[i]);
	  for(k=1;k<n;k++){
             for(i=0;i<n-k;i++){
               if(a[i]<=a[i+1]){
                 e=a[i+1];
                 a[i+1]=a[i];
                 a[i]=e;}
	           if(b[i]<=b[i+1]){
                 e=b[i+1];
                 b[i+1]=b[i];
                 b[i]=e;}
	  }}
	    sum=0;
	    total=0;
	    afast=0;
	    bfast=0;
	    aslow=n-1;
	    bslow=n-1;
	    for(;;)
		   {
		      if(a[aslow]>b[bslow]){
		        sum+=200;
	                 total++;
		        aslow--;
		        bslow--;
		      }else if(a[aslow]<b[bslow]){
		     	sum-=200;
		    	total++;
			aslow--;
			bfast++;
		     }else if(a[aslow]==b[bslow]){
		         if(a[afast]>b[bfast]){
			   sum+=200;
	                     total++;
		            afast++;
		            bfast++;
			}else if(a[afast]<b[bfast]){
			   sum-=200;
		            total++;
			   aslow--; 
			   bfast++;
		        }else if(a[aslow]==b[bfast]){
			   sum+=0;
			   total++;
			   aslow--; 
			   bfast++;
	                 }else if(a[aslow]<b[bfast]){
			   sum-=200;
			   total++;
			   aslow--; 
			   bfast++;
		       }
	            }
	    if(total==n)
	     break;  
	}
    	printf("%d\n",sum);
	}
 return 0;
}