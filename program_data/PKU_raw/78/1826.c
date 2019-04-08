/*
 * weight.cpp
 *
 *  Created on: 2012-10-27
 *      Author:??
 */
int main()                    //?????
{
	int z,q,s,l,i,j,p;        //??????????

	int cc0,cc1,cc2,cc3;             //??????
	for(z = 10;z<=50;z=z+10)          //?z,q,s,l??
		for(q = 10;q<=50;q=q+10)
			for(s = 10;s<=50;s=s+10)
				for(l = 10;l<=50;l=l+10)
				{
					cc0 = (z!=q)&&(z!=s)&&(z!=l)&&(q!=s)&&(q!=l)&&(s!=l); //??????
					cc1 = (z + q == s + l);                //????
					cc2 = (z + l >= q + s);
					cc3 = (z +s < q);
					if(cc0&&cc1&&cc2&&cc3 == 1)            //????????
					{
						int weight[4] ={z,q,s,l};           //?????????????
						char a,person[4]={'z','q','s','l'};  //????????????????
						for(i = 0;i<=2;i++)                 //?????????
						{
							for(j = 0;j<=2-i;j++)           //????
							{
								if(weight[j]<weight[j+1])    //??weight[j]<weight[j+1]
								{
									p = weight[j];          //??weight[j]?weight[j+1]
									weight[j] = weight[j+1];
									weight[j+1] = p;
									a = person[j];            //????????
									person[j] = person[j+1];
									person[j+1] = a;
								}
							}
						}
						for(i = 0;i<=3;i++)                  //?????????
						{
							cout<<person[i]<<' '<<weight[i]<<endl;
						}
					}
				}                                   //????
	return 0;                                         //???????????
}
