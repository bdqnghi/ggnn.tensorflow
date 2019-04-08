main()
{
	unsigned int i;
	scanf("%d",&i);
	  do{
	  if(i%2==1&&i!=1)
	  i=3*i+1,printf("%d*3+1=%d\n",(i-1)/3,i);
	  else if(i%2==0)
	  i=i/2,printf("%d/2=%d\n",2*i,i);
	  else
	  ;
	  }while(i!=1);
	  printf("End");
}
