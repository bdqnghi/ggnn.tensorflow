int main(){
int i,w;
scanf("%d",&w);
int a[365];
for(i=0;i<365;i++,w++){
    a[i]=w%7;}
if(a[12]==5)printf("1\n");
if(a[43]==5)printf("2\n");
if(a[71]==5)printf("3\n");
if(a[102]==5)printf("4\n");
if(a[132]==5)printf("5\n");
if(a[163]==5)printf("6\n");
if(a[193]==5)printf("7\n");
if(a[224]==5)printf("8\n");
if(a[255]==5)printf("9\n");
if(a[285]==5)printf("10\n");
if(a[316]==5)printf("11\n");
if(a[346]==5)printf("12\n");

return 0;
}