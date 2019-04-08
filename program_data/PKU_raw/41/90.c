int main()
{
	int a,b,c,d,e,w[6]={0},rank[6]={0};
	for(a=1;a<6;a++)
        for(b=1;b<6;b++)
        {if(a==b) continue;
         for(c=1;c<6;c++)
         {if(a==c||b==c) continue;
          for(d=1;d<6;d++)
          {if(a==d||b==d||c==d) continue;
           e=15-a-b-c-d;
           w[1]=e==1;w[3]=a==5;w[4]=(c!=1);w[5]=d==1;w[2]=b==2;
           rank[a]=1;rank[b]=2;rank[c]=3;rank[d]=4;rank[e]=5;
           if(e!=2&&e!=3&&w[rank[1]]==1&&w[rank[2]]==1&&w[rank[3]]+w[rank[4]]+w[rank[5]]==0)
           cout<<a<<' '<<b<<' '<<c<<' '<<d<<' '<<e;
           }
          }
          }
           
        
	return 0;
}
