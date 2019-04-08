int main(){
   int n,i,a,b,s,t;
   s=0;t=0;
   scanf("%d",&n);
   for(i=0;i<n;i++){
      scanf("%d%d",&a,&b);
	  if((a==2&&b==0)||(a==1&&b==2)||(a==0&&b==1)){s++;}
      else if((a==0&&b==2)||(a==2&&b==1)||(a==1&&b==0)){t++;}
      else if(a==b){continue;}
   }
   if(s>t){printf("A");}
   else if(s<t){printf("B");}
   else if(s==t){printf("Tie");}
   return 0;
}