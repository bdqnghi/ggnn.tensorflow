
int main()

{

    char input[100],output[100];

    int number[100],remainder[100],sum=0,a,b,i,t,l,g=1;

    scanf("%d %s %d",&a,input,&b);
	l=strlen(input);

    for(i=0;i<l;i++)

  {

   if(input[i]>='A' && input[i]<='Z')

      number[i]=input[i]-'A'+10;

   if(input[i]>='a' && input[i]<='z')

      number[i]=input[i]-'a'+10;

   if(input[i]>='0' && input[i]<='9')

      number[i]=input[i]-'0';

}  
	for (i=0;i<l;i++)
	{
		g=1;
		for (t=0;t<i;t++)
		{
			g*=a;
		}
		 sum=sum+number[l-1-i]*g;
	}

for(i=0;i<100;i++)

{

                  remainder[i]=sum%b;
                  
                  if(sum/b==0)

                       break;

                 sum=sum/b;

}
  t=i+1;

  for(i=t-1;i>=0; i--)

{

       if(remainder[i]>=0 && remainder[i]<=9)

    output[t-i-1]=       remainder[i]+'0';

    if(remainder[i]>=10 && remainder[i]<=35)

    output[t-i-1]=       remainder[i]+'A'-10;

}
  output[t]=0;
printf("%s\n",output);

return 0;

}

