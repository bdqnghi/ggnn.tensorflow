int num,i,c;
int a[5];
void main()
{
 void move(int j,int k);
        scanf("%d",&num);
  if(num>=10000) {c=4;move(num,c);}
  else if(num>=1000) {c=3;move(num,c);}
  else if(num>=100) {c=2;move(num,c);}
  else if(num>=10) {c=1;move(num,c);}
  else {c=0;move(num,c);}
 for(i=0;i<=c;i++)
  printf("%d",a[i]);
}
void move(int j,int k)
{
 if(k>0)
 {
 a[k]=(int)(j/(int)pow(10,k));
 int o=(int)(j%(int)pow(10,k));
    move(o,k-1);
 }
 else if(k==0)
 {a[k]=j;
 }
}