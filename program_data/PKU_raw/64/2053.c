//
//  main.cpp
//  ????
//
//  Created by ???? on 13-11-6.
//  Copyright (c) 2013? ????. All rights reserved.
//

int main()
{
	int a[11][4];
    int k=1;
	float b[100][3];
	//input
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i][1]>>a[i][2]>>a[i][3];
        
	}
	//end of input
	//the distence into b
	for(int i=1;i<n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			
			double dis=  (a[i][1]-a[j][1])*(a[i][1]-a[j][1])
                        +(a[i][2]-a[j][2])*(a[i][2]-a[j][2])
                        +(a[i][3]-a[j][3])*(a[i][3]-a[j][3]);
			
			b[k][0]=sqrt(dis);
			b[k][1]=i;
			b[k][2]=j;
			k++;
            
		}
    
	}
    //sort
	for(int i=1;i<=k-1;i++)
	{
		for(int j=k-1;j>=i+1;j--)
		{
			if(b[j][0]>b[j-1][0])
			{
				float t0=b[j][0];
				b[j][0]=b[j-1][0];
				b[j-1][0]=t0;
                
				int t1=b[j][1];
				b[j][1]=b[j-1][1];
				b[j-1][1]=t1;
                
				int t2=b[j][2];
				b[j][2]=b[j-1][2];
				b[j-1][2]=t2;
                
			}
		}
	}
    //cout<<b[1][0]<<' '<<b[2][0]<<endl;
	//cout
	for(int j=1;j<=k-1;j++)
	{
		printf("(%d,%d,%d)-(%d,%d,%d)=%.2f\n",a[ (int)b[j][1] ][1],a[ (int)b[j][1] ][2],a[ (int)b[j][1] ][3],
                                              a[ (int)b[j][2] ][1],a[ (int)b[j][2] ][2],a[ (int)b[j][2] ][3],
                                              b[j][0]);
	}
	
	return 0;
    
}
