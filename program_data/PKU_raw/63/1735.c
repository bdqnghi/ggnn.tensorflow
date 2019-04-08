int main()
{
    int x1,y1,x2,y2,counter=0;
    int a[100][100],b[100][100],c[100][100];
    cin>>x1>>y1;
    for(int i=0;i<x1;i++)
        for(int j=0;j<y1;j++)
            cin>>a[i][j];
    cin>>x2>>y2;
    for(int k=0;k<x2;k++)
        for(int l=0;l<y2;l++)
            cin>>b[k][l];
    for(int m=0;m<x1;m++)
         for(int n=0;n<y2;n++)
             {
                c[m][n]=0;
                for(int o=0;o<y1;o++)
                    c[m][n]=c[m][n]+a[m][o]*b[o][n];
              }
    for(int p=0;p<x1;p++)
         for(int q=0;q<y2;q++)
             {
                  cout<<c[p][q];
                  counter+=1;
                  if(counter%y2==0) cout<<endl;
                  else cout<<" ";
              }
    return 0;
}
 