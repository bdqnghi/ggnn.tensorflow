int main()
{
        int a[2][1100]={0};
        int b[2100]={0},i,zhongdian=2000;
        char qwe[2200]={' '};
        for(i=1;;i++)
        {
                cin>>b[i];
                cin.get(qwe[i]);
                if(i==zhongdian*2)
                        break;
                if(qwe[i]=='\n')
                {
                        zhongdian=i;
                }      
        }
        
        int m=1,n=1;
        for(i=1;i<=zhongdian;i++)
        {
                a[0][m]=b[i];
                m++;
        }
        
        for(i=zhongdian+1;i<=zhongdian*2;i++)
        {
                a[1][n]=b[i];
                n++;
        }           //n-1???
        
      /*  for(int i=1;i<m;i++)
                cout<<a[0][i]<<",";
        cout<<endl;
         for(int i=1;i<n;i++)
                cout<<a[1][i]<<",";
                cout<<endl;*/
                
        int max=a[1][1],min=a[0][1];
        for(i=1;i<=n-1;i++)     //??????
        {
                if(max<a[1][i])
                        max=a[1][i];
                if(min>a[0][i])
                        min=a[0][i];
        }              //max??????,min??????
        int c[1100]={0};
        int j;
        for(i=min;i<=max;i++)          //????????????c[i]???
        {
                for(j=1;j<n;j++)
                {
                        if(i<a[1][j]&&i>=a[0][j])
                                c[i]++;
                }
        }
        int MAX=c[min];
        for(i=min+1;i<=max;i++)    //????????
        {
                if(MAX<c[i])
                        MAX=c[i];
        }
        cout<<n-1<<" "<<MAX;
        return 0;

}
