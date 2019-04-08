int main()
{
 int n;
 scanf("%d\n",&n);
 double a[10];
 int c=0;double b=0;
 #define ROW 2
int  sz[ROW][COL];  
 for(int row = 0; row  < 2; row++){
  for(int col = 0; col < n; col++){scanf("%d ",&sz[row][col]);}}
 for (int i=0;i<n;i++){
  if(sz[1][i]>=90&&sz[1][i]<=100){a[i]=4.0;}
  else{if((sz[1][i]>=85)&&(sz[1][i]<=89)){a[i]=3.7;}
 else{if((sz[1][i]>=82)&&(sz[1][i]<=84)){a[i]=3.3;}
 else{if((sz[1][i]>=78)&&(sz[1][i]<=81)){a[i]=3.0;}
    else{if((sz[1][i]>=75)&&(sz[1][i]<=77)){a[i]=2.7;}
 else{if((sz[1][i]>=72)&&(sz[1][i]<=74)){a[i]=2.3;}
 else{if((sz[1][i]>=68)&&(sz[1][i]<=71)){a[i]=2.0;}
 else{if((sz[1][i]>=64)&&(sz[1][i]<=67)){a[i]=1.5;}
 else{if((sz[1][i]>=60)&&(sz[1][i]<=63)){a[i]=1.0;}
 else{a[i]=0;}}}}}}}}}
b+=(a[i]*sz[0][i]);
  c+=sz[0][i];
 }
 double d;
 d=b/c;
 printf("%.2f\n",d);
 return 0;
}

