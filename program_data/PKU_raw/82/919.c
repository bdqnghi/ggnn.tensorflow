//********************************
//*????5.cpp                **
//*???????               **
//*?????? 1200012834      **
//*???2012.10.14             **
//********************************

int main()
{
	int n,i,j;   // ?? 
	cin >> n;
	int a[n],b[n],c[n],max;
	for(i=0;i<n;i++)
		cin >> a[i] >> b[i];
	for(i=0;i<n;i++)
        c[i]=0; 
    for(i=0;i<n;i++)
    {
        if(a[i]>=90 && a[i]<=140 && b[i]>=60 && b[i]<=90)
            c[i]=1; 
        for(j=i+1;j<n;j++)
        { 
            if(a[j]>=90 && a[j]<=140 && b[j]>=60 && b[j]<=90)
                c[i]++;
            else break;
        }
    }
    max=c[0];
    for(i=1;i<n;i++)
        if(c[i]>max)
            max=c[i]; 
    cout << max << endl;
    return 0;
}
