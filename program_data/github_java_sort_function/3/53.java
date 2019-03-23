package com;

import java.util.ArrayList;
import java.util.Deque;
import java.util.LinkedHashSet;
import java.util.LinkedList;
import java.util.List;
import java.util.Set;

class Node13{
	int c;
	Node13 next;
	public Node13(int c) {
		
		this.c=c;
	}
}
public class Test13 {

	static void addEdge(int a,int b){
		Node13 p=list.get(a-1);
		while(p.next!=null)
			p=p.next;
		p.next=new Node13(b);
	}
	static void topolSort(){
		Node13 p=getvertex();
		Node13 q=getAdjVertex(p);
		System.out.println("q : "+q.c);
		set.add(p);
		set.add(q);
		while(!set.isEmpty()){
			q=getAdjVertex(q);
			if(q==null){
				stack.add(set.getLast());
				set.removeLast();
				if(!set.isEmpty()){
					q=set.getLast();
				}
			}else
				set.add(q);
			if(set.isEmpty()){
				q=getvertex();
				set.add(q);
				if(q==null)
					break;
			}
		}
	}
	static Node13 getvertex(){
		Node13 p=null;
		for(Node13 n:list){
			if(!visited[n.c-1]){
				visited[n.c-1]=true;
				p=n;
				break;
			}
		}
		return p;
	}
	static Node13 getAdjVertex(Node13 p){
		p=list.get(p.c-1);
		p=p.next;
		Node13 q=null;
		while(p!=null){
			if(!visited[p.c-1]){
				visited[p.c-1]=true;
				q=p;
				break;
			}
			p=p.next;
		}
		return q;
	}
}
