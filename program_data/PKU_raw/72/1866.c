/*
 * d.cpp
 *
 *  Created on: 2013-12-13
 *      Author: de
 */
int main(){
	int m,n,i,j;
	cin>>m>>n;
	int data[m][n];
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			cin>>data[i][j];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			if(i==0){
			   if(j==0){
				   if(data[i][j]>=data[i][j+1]&&data[i][j]>=data[i+1][j])
					   {cout<<i<<" "<<j<<endl;continue;}
			}
			   if(j==n-1){
				   if(data[i][j]>=data[i][j-1]&&data[i][j]>=data[i+1][j])
				   					   {cout<<i<<" "<<j<<endl;continue;}
			   }
			   else{
				   if(data[i][j]>=data[i][j-1]&&data[i][j]>=data[i][j+1]&&data[i][j]>=data[i+1][j])
					   {cout<<i<<" "<<j<<endl;continue;}
			   }
			}
			if(i==m-1){
				if(j==0){
								   if(data[i][j]>=data[i][j+1]&&data[i][i]>=data[i-1][j])
									   {cout<<i<<" "<<j<<endl;continue;}
							}
							   if(j==n-1){
								   if(data[i][j]>=data[i][j-1]&&data[i][j]>=data[i-1][j])
								   					   {cout<<i<<" "<<j<<endl;continue;}
							   }
							   else{
								   if(data[i][j]>=data[i][j-1]&&data[i][j]>=data[i][j+1]&&data[i][j]>=data[i-1][j])
									   {cout<<i<<" "<<j<<endl;continue;}
							   }
			}
			else{
				if(j==0){
					if(data[i][j]>=data[i-1][j]&&data[i][j]>=data[i+1][j]&&data[i][j]>=data[i][j+1])
					{cout<<i<<" "<<j<<endl;continue;}
				}
				if(j==n-1){
					if(data[i][j]>=data[i-1][j]&&data[i][j]>=data[i+1][j]&&data[i][j]>=data[i][j-1])
										{cout<<i<<" "<<j<<endl;continue;}
				}
				else {if(data[i][j]>=data[i-1][j]&&data[i][j]>=data[i+1][j]&&data[i][j]>=data[i][j-1]&&data[i][j]>=data[i][j+1])
					{cout<<i<<" "<<j<<endl;continue;}
			}
			}
		}
	}
	return 0;
}

