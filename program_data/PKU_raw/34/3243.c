int move(int i)
{int j=i/2,k=i*3+1;
	if(i==1)
printf("End");
else if(i%2==0)
{
printf("%d/2=%d\n",i,j);
return(j);
}
else
{
printf("%d*3+1=%d\n",i,k);
return(k);
}
}
void hanoi(int n)
{int z;
	if(n==1)
move(n);
else
{z=move(n);
hanoi(z);
}
}
void main()
{  
	int a;
scanf("%d",&a);
hanoi(a);
}