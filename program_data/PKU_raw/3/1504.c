int main(){  
 int n,k,j,i,a,s; 
 int sz[1000];  
scanf("%d %d",&n,&k); 
 for(i=0;i<n;i++)  {       
scanf("%d",&(sz[i]));  }  
for(j=0;j<n;j++)  {      
   if( s ==  1 )                 break;     
for(a=n-1;a>=0;a--)         {       
 if( (a!=j) && (sz[a]+sz[j]==k) )                {           
s=1;         
  break;                }         }    } 
if(s==1) { 
 printf("yes"); }
 else {  printf("no"); }  
 return 0;
}