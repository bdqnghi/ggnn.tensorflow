int main()
{
   int a[50]={0},b[50]={0},c[100]={0};int i,j;
   int *p1=&i,*p2=&j;
void input(int a[],int b[],int *p1,int *p2);
  input(a,b,p1,p2);

void sort(int a[],int *p1);
sort(a,p1);
sort(b,p2);
void connect(int a[],int b[],int c[],int *p1,int *p2);
connect(a,b,c,p1,p2);
void output(int c[],int *p1,int *p2);
output(c,p1,p2);
return 0;
}


void input(int a[],int b[],int *p1,int *p2)
{
    int i;
scanf("%d %d",p1,p2);

for(i=0;i<*p1;i++)
scanf("%d",&a[i]);
for(i=0;i<*p2;i++)
scanf("%d",&b[i]);

}

void sort(int a[],int *p1)
{  int i,j,k,t;
  for(i=0;i<*p1-1;i++)
         { k=i;
  for(j=i+1;j<*p1;j++)
    if(a[k]>a[j])  k=j;
     if(k!=i)
     {  t=a[k];a[k]=a[i];a[i]=t; }
        }
  
     
}

void connect(int a[],int b[],int c[],int *p1,int *p2)
{  int i,k=0;
   for(i=0;i<*p1;i++)
    c[i]=a[i];
  for(i=*p1;i<*p1+*p2;i++,k++)
    c[i]=b[k];

}

void output(int c[],int *p1,int *p2){
int i,k;
k=*p1+*p2;
for(i=0;i<k-1;i++)
printf("%d ",c[i]);
printf("%d",c[k-1]);




}

