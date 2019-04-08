int main () 
{
 
char a[200];
cin>>a;
int x[200],b[200],i;
for( i=0;i<strlen(a);i++)
x[i]=a[i]-'0';
i=0;
int s=0,temp=0;
while(i<strlen(a))
{						   
 temp=temp*10+x[i++];
b[s++]=temp/13;
temp=temp%13;
}

int k=0;
while(b[k]==0&&k<s)
k++;

if(k==s)
{cout<<0<<endl<<temp%13<<endl;return 0;}
for(int i=k;i<s;i++)
cout<<b[i];
 cout<<endl<<temp%13<<endl;			  
 				  
  
	return 0;    
}
 
