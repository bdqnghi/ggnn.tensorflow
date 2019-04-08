
int main(){

 int a,b,i,x,y,sz[8][8],tag,col,row,p;

 char c;

 scanf("%d %c %d",&a,&c,&b);

 for(x=0;x<a;x++){

  for(y=0;y<b;y++){

   scanf("%d",&sz[x][y]);

  }

 }

 for(x=0;x<a;x++){

  i=sz[x][0];

  col=0;

  row=0;

  tag=0;

  for(y=0;y<b;y++){

   if(sz[x][y]>i){

    i=sz[x][y];

    col=x;

    row=y;

   }
         
  }

  for(p=0;p<a;p++){

   if(i>sz[p][row])

    break;

   else

    tag=tag+1;

  }

  if(tag==a){

   printf("%d+%d",col,row);

   break;

  }

 }

 if(x==a){

  printf("No");

 }

 

 return 0;

}

