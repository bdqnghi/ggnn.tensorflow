/*
 * 11.6.cpp
 *
 *  Created on: 2011-11-4
 *      Author: 11095
 */

int main()
{
	int m,n;
	cin>>m>>n;
	int mout[m][n],i,j;
	for(i=0;i<m;i++){                //????m*n???
		for(j=0;j<n;j++){
			cin>>mout[i][j];
		}
	}

	int vmt[m+2][n+2];              //?m*n?????????
	for (j=0;j<n+2;j++){
		vmt[0][j]=0;
		vmt[m+1][j]=0;
	}
	for(i=0;i<m+2;i++){
		vmt[i][0]=0;
		vmt[i][n+1]=0;
	}
	for(i=1;i<m+1;i++){
		for(j=1;j<n+1;j++){
			vmt[i][j]=mout[i-1][j-1];
		}
	}

	for(i=1;i<m+1;i++){
		for(j=1;j<n+1;j++){
			if(vmt[i][j]>=vmt[i-1][j]&&vmt[i][j]>=vmt[i+1][j]&&vmt[i][j]>=vmt[i][j-1]&&vmt[i][j]>=vmt[i][j+1]){
				i--;j--;
				cout<<i<<" "<<j<<endl;
				i++;j++;
			}

		}
	}
	return 0;
}
