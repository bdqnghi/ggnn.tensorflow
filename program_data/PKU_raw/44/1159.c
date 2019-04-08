int reverse(int num)
{
 int t=1,b=0,x=0;
 int i,j;
 int k[10],h[10];
// scanf("%d",&num);
 for(i=0;num!=0;i++)
 { 
        k[i]=num%10;
  b=b+1;
     num=(num-num%10)/10;
  t=t*10;
 }
 t=t/10;
    for(i=0;i<b;i++)
 { if(k[i]!=0)break;
  else t=t/10;
 }
 for(j=0;j<b-i;j++)
  h[j]=k[i+j];
 for(j=0;j<b-i;j++)
 { x=x+h[j]*t;
     t=t/10;
 }
 return(x);
}

void main()
{
 int a[6],i;
 for(i=0;i<6;i++)
  scanf("%d",&a[i]);

 for(i=0;i<6;i++)
  printf("%d\n",reverse(a[i]));
}