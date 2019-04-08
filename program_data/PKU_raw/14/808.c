int main(int argc, char* argv[])
{
	struct student
	{int id;
	int x;
	int y;
	int z;
	}student1,student2,student3,studenta;
	int n,i;
	scanf("%d",&n);
	student1.z=student2.z=student3.z=0;
	for(i=0;i<n;i++){
		scanf("%d%d%d",&studenta.id,&studenta.x,&studenta.y);
		studenta.z=studenta.x+studenta.y;
		if(studenta.z>student1.z){
			student3.z=student2.z;student3.id=student2.id;
			student2.z=student1.z;student2.id=student1.id;
			student1.z=studenta.z;student1.id=studenta.id;
		}
		else if(studenta.z>student2.z){
			student3.z=student2.z;student3.id=student2.id;
			student2.z=studenta.z;student2.id=studenta.id;
		}
		else if(studenta.z>student3.z){
			student3.z=studenta.z;student3.id=studenta.id;
		}
	}
	printf("%d %d\n%d %d\n%d %d\n",student1.id,student1.z,student2.id,student2.z,student3.id,student3.z);
	return 0;
}