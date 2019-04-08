
int main()
{
int n,i;
int a=0,b=0;
int x,y;

scanf("%d\n",&n);
for(i=0;i<n;i++)
{
                scanf("%d %d\n",&x,&y);
                if(x==y){a++;b++;}
                else
                if(x-y==-1||x-y==2)a++;
                else
                b++;
}

if(a==b)printf("Tie");
else
if(a>b)printf("A");
else
printf("B");


    
}