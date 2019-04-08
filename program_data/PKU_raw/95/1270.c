int main ()
{
	
	int i,t=0;
	int a[100],b[100];
	for (i=0;(a[i]=cin.get())!='\n';i++)
	{
		if (a[i]>96 && a[i]<123) 
			a[i]=a[i]-32;
	}
	a[i]='\0';
	for (i=0;(b[i]=cin.get())!='\n';i++)
	{
		if (b[i]>96 && b[i]<123)
			b[i]=b[i]-32;
	}
	b[i+1]='\0';
    for (i=0;a[i]!='\0' && b[i]!='\0';i++)
    {
		if (a[i]>b[i])  
		{
			t=1;
			break;
		}
		else if (a[i]<b[i])  
		{
			t=-1;
			break;
		}
	}
	if (t==1)
			cout <<">"<<endl;
    else if (t==0)  
			cout <<"="<<endl;
	else 
			cout <<"<"<<endl;
	return 0;
	
}
