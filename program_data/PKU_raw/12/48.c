int main(int argc, char* argv[])
{
	int x1,x2,n[15],y;	
	int  i;
	int t;
	while(1){
         //?0?8?0?1?0?8?0?5?0?1?0?7?0?4?0?4?0?8?0?5?0?6?0?6 
         i=0;         
         while(1){
               scanf("%d",&t);
               if(t==-1){
          
                 return 0;
               }                        
               if(t==0)
                   break;
               else{
                   n[i]=t;
                   i++;
               }
         }         
         y=0;
         for(x1=i-1;x1>=0;x1--){
            for(x2=x1-1;x2>=0;x2--){
              if( n[x1]==n[x2]*2 || n[x2]==n[x1]*2 )
				y+=1;
            }			
		 }
		 printf("%d\n",y);
    }
 
	return 0;
}