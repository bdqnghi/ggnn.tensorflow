/*
 *  Name: tizhong.cpp
 *
 *  Created on: 2012-10-16
 *  Author: 00948343_??
 *  Function????
 */



int main(){ 
	int z,q,s,l;                                  //??????????
	for (z=10;z<=50;z=z+10){                      //?????????????????
		for (q=10;q<=50;q=q+10){
			if (q!=z){
				for (s=10;s<=50;s=s+10){
					if ((s!=z)&&(s!=q)){
						for (l=10;l<=50;l=l+10){
							if ((l!=s)&&(l!=z)&&(l!=q)){
								if ((l+s-z==q)&&(z+l-s>q)&&(z+s<q)){        //????????????????
									for (int i=50;i>0;i=i-10){
										if (i==z){
											cout << "z " << i << endl;
										}
										else if (i==q){
											cout << "q " << i << endl;
										}
										else if (i==s){
											cout << "s " << i << endl;
										}
										else if (i==l){
											cout << "l " << i << endl;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}





