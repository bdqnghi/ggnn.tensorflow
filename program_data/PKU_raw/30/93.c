void main()
{
int a,ss=0,i;
scanf("%d",&a);
for(i=1;i<=a;i++)
   {if(i%7==0) ss=ss;
    else if(i>=70&&i<80) ss=ss;
	else if(i%10==7) ss=ss;
	else ss=ss+i*i;
	}
printf("%d\n",ss);
}
