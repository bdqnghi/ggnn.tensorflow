int main()
{
	 int a[100][100];
    int n,s,k=0;
    int b[1000];
    b[0]=0;
    scanf ("%d",&n);
    
    for (int i=0;i<n;i++)
    { for (int j=0;j<n;j++)
        { scanf ("%d",&a[i][j]);
           
              if (a[i][j]==0)
              {  b[k]=b[k]+1;}
        }
        if (b[k]!=0)
           {  k+=1;}
    }
    
    s=(b[0]-2)*(k-2);
    printf("%d",s);
	return 0;
}

