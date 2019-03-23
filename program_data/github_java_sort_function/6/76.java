package paixu;

import java.util.ArrayList;
import java.util.List;
/*
 * ��������
 * ����ʵ�֣���ά����Ҳ��ʵ�֣�
 * ʱ�临�Ӷ�O(d*n)dΪ�������λ��=time
 * 2016.3.18by����
 */

public class radixsort {
	public static void radix_sort(int[]list){
		int max=list[0];
		for(int i=0;i<list.length;i++){
			if(list[i]>max)
				max=list[i];//�ҳ����������ֵ
		}
		int time=0;//�ҳ����ֵ��λ������Ҫ����������
		while(max>0){
			max/=10;
			time++;
		}
		List<ArrayList>queue=new ArrayList<ArrayList>();
		for(int i=0;i<10;i++){
			ArrayList<Integer>queue0=new ArrayList<Integer>();
			queue.add( queue0);
		}
		for(int i=1;i<time+1;i++){
			for(int j=0;j<list.length;j++){
				int x= list[j]%(int)Math.pow(10, i)/(int)Math.pow(10, i-1);//����ÿ������timeλֵ
				ArrayList<Integer>queue1=queue.get(x);//queue1��queue�е�x��Ԫ��
				queue1.add(list[j]);//����queue1�ŵ��ǵ�timeλ��ͬ��list�е�ֵ
				queue.set(x, queue1);//queue�ŵ���10������
			}
		
		int count=0;
		for(int j=0;j<10;j++){
			while(queue.get(j).size()>0){
			ArrayList<Integer>queue2=queue.get(j);
			list[count]=queue2.get(0);
			queue2.remove(0);
			count++;
			}
			}
		}
	}
		
	public static void main(String[]args){
		int[]a={43,132,3,45,67,657,960,6};
		radix_sort(a);
		for(int j=0;j<a.length;j++){
			System.out.print(a[j]+" " );
		}
		
	}
		
	}
		
