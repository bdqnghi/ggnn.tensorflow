int main(){  
int n,i;  
scanf("%d",&n);  
i=n;  
while(i>1)  {		   	
if(i%2!=0){				
printf("%d*3+1=%d\n",i,i*3+1);				
i=i*3+1;}		
if(i%2==0){			
printf("%d/2=%d\n",i,i/2);			
i=i/2;}			   
}   
printf("End");	
return 0;
}
