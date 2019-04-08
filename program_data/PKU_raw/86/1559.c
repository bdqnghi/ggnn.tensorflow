int main(){  
  int i,j,n,w,sum,flag,k,x;  
  scanf("%d",&n);  
  for(i=0;i<n;i++)    {     
   scanf("%d",&w);
flag=0;       
 for(j=0;j<w;j++)        {     
       scanf("%d",&sum);   
         if(flag!=-1&&(sum+3*(j+1))>59){
flag=1;
break;
}     
  }     
   for(k=j+1;k<w;k++)       
     scanf("%d",&x);       
 if(flag&&(sum<=60)&&((sum+3*j)<=60))          
  printf("%d\n",sum);
        else       
     printf("%d\n",60-j*3);
  }    
return 0;
}

