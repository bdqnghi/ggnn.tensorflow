
int main(int argc, char* argv[])
{
   int shuzu[16];
   int i,j,k,number;
   for(k=1;1;k++){
	   
	   scanf("%d",&shuzu[0]);
	   if(shuzu[0]==-1){
		   break;
	   }
        number=1;
	   for(i=1;i<16;i++){//????
		   
		   scanf("%d",&shuzu[i]);
		   if(shuzu[i]==0){
			   break;
		   }
		   else number++;
	   }
	   

       int zu=0;
	   double a,b;
	   for(i=0;i<number-1;i++){
		   for (j=number-1;j>i;j--){
			   a=(double)shuzu[i]/shuzu[j];
			   b=(double)shuzu[j]/shuzu[i];
			   if(a==2||b==2){
				   zu++;
			   }
		   }
	   }
	   printf("%d\n",zu);
			   
	  

   }

	return 0;
}
