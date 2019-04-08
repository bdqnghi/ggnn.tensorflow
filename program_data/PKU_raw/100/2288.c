int main(){
  int i,a[60]={0},flag=0,k;  char str[300]={0};
  short c;
  scanf("%s",str);
  for(i=0;i<300;i++)
    {
       k=str[i]-64;
     if(k>=1&&k<=26||k>32&&k<=58)    
                { a[k]++; flag=1;  }
    }
   if(flag==0)  printf("No\n");
  else  for(k=1;k<60;k++)
 { if(a[k]!=0) 
 {  c=k+64;
 printf("%c=%d\n",c,a[k]); } }
return 0;  
}
