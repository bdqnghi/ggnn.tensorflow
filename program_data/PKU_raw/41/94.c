/*
 * 1.cpp
 *
 *  Created on: 2011-11-6
 *      Author: ???
 *      1100012870
 */
int main()
{
	char a[6],b[6]={' ','A','B','C','D','E'};   //a???????
	int c[6];
	int i,j,k,l,m,w;

	for(i=1;i<=5;i++)                  //??5???
		for(j=1;j<=5;j++){
			if(i==j)continue;
			for(l=1;l<=5;l++){
				if(i==l)continue;
				if(j==l)continue;
				for(k=1;k<=5;k++){
					if(i==k)continue;
					if(j==k)continue;
					if(l==k)continue;
					for(m=1;m<=5;m++){
						if(i==m)continue;
						if(j==m)continue;
						if(l==m)continue;
						if(k==m)continue;

						a[1]=b[i];          //???a????????????
						a[2]=b[j];
						a[3]=b[l];
						a[4]=b[k];
						a[5]=b[m];

						c[1]=(a[1]=='E');    //?????5??????
						c[2]=(a[2]=='B');
						c[3]=(a[5]=='A');
						c[4]=(a[1]!='C');
						c[5]=(a[1]=='D');

						if(c[i]!=1 || c[j]!=1) continue;    //???????????????
						if(c[l]!=0 || c[k]!=0 || c[m]!=0)continue;  //??????????????

						for(w=1;w<=5;w++)                //????????????5??????
							if (a[w]=='A') cout<<w;
						for(w=1;w<=5;w++)
							if (a[w]=='B') cout<<' '<<w;
						for(w=1;w<=5;w++)
							if (a[w]=='C') cout<<' '<<w;
						for(w=1;w<=5;w++)
							if (a[w]=='D') cout<<' '<<w;
						for(w=1;w<=5;w++)
							if (a[w]=='E') cout<<' '<<w;
						return 0;
					}
				}
			}
		}
}