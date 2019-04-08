

int main(int argc, char *argv[])
{
    int n, i ,sum=0;
    cin>>n;
    for (i=1 ;i <= n;i ++)
    { 
    if ((i%7) == 0)
		;
    else
	{if ((i/10 ==7) || ((i %10) ==7))
	;
           else
           {sum= sum +i*i;}
           }
      }
cout<<sum<<endl;

    return EXIT_SUCCESS;
}
