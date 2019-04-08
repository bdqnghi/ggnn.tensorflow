int main(int argc, char* argv[])
{
 int input;
 int ret,num;
 scanf("%d",&input);

for(;;)
 {
    if(input<10)
   {
    printf("%d\n",input);
break;
   }
   num=input%10;
  input=input/10;
  
  printf("%d",num);

 }

 return 0;
}

