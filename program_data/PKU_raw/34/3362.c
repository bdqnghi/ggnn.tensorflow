void main()
{
void operate(int x);
int n;
scanf("%d",&n);
operate(n);
}

void operate(int x)
{
int y;
if(x==1){printf("End");return;}
else if(x%2==1){y=x;x=x*3+1;printf("%d*3+1=%d\n",y,x);}
else if(x%2==0){y=x;x=x/2;printf("%d/2=%d\n",y,x);}
operate(x);
}