/*
 * ctz.cpp
 *
 *  Created on: 2011-11-4
 *      Author: sony
 */

int main()
{
	int z,q,s,l,wz,wq,ws,wl;
	int s1,s2,s3;
	for(z=1;z<=5;z++){
		for(q=1;q<=5;q++){
			if(q==z) continue;
			for(s=1;s<=5;s++){
				if(s==z||s==q) continue;
				for(l=1;l<=5;l++){
					if(l==z||l==q||l==s) continue;
					s1=(z+q==s+l);
					s2=(z+l>s+q);
					s3=(z+s<q);
					if(s1+s2+s3==3)
						{wz=z;
						wq=q;
						ws=s;
						wl=l;}
				}
			}
		}
	}
	char output[6]={'a','a','a','a','a','a'};
	output[wz]='z';
	output[wq]='q';
	output[ws]='s';
	output[wl]='l';
	int I;
	for(int i=5;i>=1;i--){
		if(output[i]!='a'){
			I=i*10;
			cout<<output[i]<<" "<<I<<endl;
		}
	}
	return 0;
}
