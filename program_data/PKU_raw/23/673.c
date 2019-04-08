
int main()
{   char str[10000],a[1000][1000];
    cin.getline(str,10000);
    int n,i,k=0,l=0,s;
    n=strlen(str);
    for(i=0;i<n;i++)
    {
    	if(str[i]==' ')
    	{
    		k++;
    		l=0;
    	}
    	else{
    		a[k][l]=str[i];
    		l++;
    	}
    }
    for(s=k;s>0;s--)
    	{
    		cout<<a[s]<<" ";
    	}
   cout<<a[0]<<endl;
    return 0;
}
