int main()
{
	char * p=NULL;//??????
	char a[101];
	int c[101];
	
	memset (c,0,sizeof(c));//???????
    	
	cin.getline(a,101,'\n');
	int i,n=0;
	for(i=0;i<=100;i++)
	{if(a[i]!='\0')n++;
	else break;
	}
	
	p=&a[0];
   	for(i=0;*(p+i)!='\0';i++)                 //??????????
         if(*(p+i)!=32||(*(p+i)==32&&*(p+i+1)!=32))
			 c[i]=1;
		 
	for(i=0;i<=n-1;i++)
		if(c[i])cout<<a[i];
		cout<<endl;
    return 0;
}