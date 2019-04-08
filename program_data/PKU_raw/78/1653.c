/*
 * c.cpp
 *
 *  Created on: 2010-11-20
 *      Author: jsgl
 */

int main(){
   int z,q,s,l,i,j,m;//????????
   char a[6];  //???????????
   for(z=1;z<=5;z++){ //?4?????
	   for(q=1;q<=5;q++){
		   if(z==q) continue;
		   for(s=1;s<=5;s++){
			   if(s==z||s==q) continue;
			   for(l=1;l<=5;l++){
				   if(l==z||l==q||l==s) continue;
				   if((z+q==s+l)&&((z+l)>(s+q))&&((z+s)<q))//?????
					   {a[z]='z';//???????????
				       a[q]='q';
				       a[s]='s';
				       a[l]='l';

				       for(i=0;i<=5;i++)
	          if((i!=z)&&(i!=q)&&(i!=s)&&(i!=l)) m=i;

                 for(j=5;j>=1;j--){//??????
	             if(j==m) continue;
	             cout<<a[j]<<" "<<j*10<<endl;
                         }

				       }
			   }
		   }

	   }
   }

return 0;
}
