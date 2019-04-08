void main()
{
   int a,x,y,z;
   x=y=z=0;
   scanf("%d",&a);
   if(a%3==0) x=1;
   if(a%5==0) y=1;
   if(a%7==0) z=1;
   if(x==1&&y==1&&z==1) printf("3 5 7\n");
	   else if (x==1&&y==1&&z==0) printf("3 5\n");
        else if (x==1&&y==0&&z==1) printf("3 7\n");
 else if (x==0&&y==1&&z==1) printf("5 7\n");
 else if (x==1&&y==0&&z==0) printf("3\n");
 else if (x==0&&y==1&&z==0) printf("5\n");
else if (x==0&&y==0&&z==1) printf("7\n");
 else  printf("n\n");
}