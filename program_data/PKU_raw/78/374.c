/*
 *100030.cpp
 *???????
 *Created on: 2012-10-13
 *Author:??
 */
int z=0,q=0,s=0,l=0,c=0,a[10],i=0,j=0;
char m[5];
char d;
int main (){
	for(z=1;z<6;z++)//????
	{
		for(q=1;q<6;q++)
		{
			if(z!=q)
			{
				for(s=1;s<6;s++)
				{
					if((z!=s)&&(q!=s))
					{
						for(l=1;l<6;l++)
						{
							if((z!=l)&&(q!=l)&&(s!=l))
							{
								if(((z+q)==(s+l))&&((z+l)>(s+q))&&((z+s)<(q)))
								{
									a[0]=z,a[1]=q,a[2]=s,a[3]=l;
									m[0]='z';m[1]='q';m[2]='s';m[3]='l';
									for(i=0;i<3;i++){//?????
										for(j=0;j<(3-i);j++){
											if (a[j]>a[j+1]){
												c=a[j];
												a[j]=a[j+1];
												a[j+1]=c;
												d=m[j];
												m[j]=m[j+1];
												m[j+1]=d;
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
	}
	cout<<m[3]<<' '<<a[3]*10<<endl;//?????
	cout<<m[2]<<' '<<a[2]*10<<endl;
	cout<<m[1]<<' '<<a[1]*10<<endl;
	cout<<m[0]<<' '<<a[0]*10<<endl;
	return 0;
}
