/*??E?????????E??D???????????E????????????A???????????D???????*/
int main ()
{
	int i, j, rank[6], ju[6];/*rank[4]?1??A??????ju[4]?1??D???????*/
	for (rank[1]=2; rank[1]<4; rank[1]++) {
		for (rank[2]=2; rank[2]<5; rank[2]++) {
			if (rank[2]==rank[1]) continue;
			for (rank[3]=1; rank[3]<5; rank[3]++) {
				if (rank[3]==rank[1]||rank[3]==rank[2]) continue;
				for (rank[4]=1; rank[4]<6; rank[4]++) {
					if (rank[4]==rank[1]||rank[4]==rank[2]||rank[4]==rank[3]) continue;
					for (rank[5]=1; rank[5]<6; rank[5]++) {
						if (rank[5]==rank[1]||rank[5]==rank[2]||rank[5]==rank[3]||rank[5]==rank[4]) continue;
						ju[1]=0;
						ju[2]=(rank[2]==2);
						ju[3]=(rank[5]==1);
						ju[4]=(rank[1]!=3);
						ju[5]=0;
						if(ju[rank[1]]==1&&ju[rank[2]]==1&&ju[rank[3]]==0&&ju[rank[4]]==0&&ju[rank[5]]==0) {
							for (i=1; i<6; i++)
								if (rank[i]==1) printf("%d", i);
							for (j=2; j<6; j++) {
								for (i=1; i<6; i++) {
									if (rank[i]==j) printf(" %d", i);
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