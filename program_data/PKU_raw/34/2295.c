
int main(int argc, char* argv[])
{int m;
scanf("%d",&m);
if (m==1)
printf("End");
else
{
    while(m!=1)
	{  if((m-2*(m/2))!=0)
	{printf("%d*3+1=%d\n",m,m*3+1);
     m=m*3+1;
	}
       if((m-2*(m/2))==0)
	   {
        printf("%d/2=%d\n",m,m/2);
          m=m/2;
	   }
	}
	printf("End");
}


	return 0;
}
