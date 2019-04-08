int main()
{
int sum,n100,n50,n20,n10,n5,n1;
//????
cin>>sum;
//?????
n100=sum/100;

sum=sum-n100*100;
n50=sum/50;

sum=sum-n50*50;
n20=sum/20;

sum=sum-n20*20;
n10=sum/10;

sum=sum-n10*10;
n5=sum/5;

sum=sum-n5*5;
n1=sum;
//????
cout<<n100<<endl<<n50<<endl<<n20<<endl<<n10<<endl<<n5<<endl<<n1<<endl;
//??
return 0;
}
