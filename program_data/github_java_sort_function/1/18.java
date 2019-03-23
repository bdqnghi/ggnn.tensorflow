public ListNode insertionSortList(ListNode head) {
        if (head == null || head.next == null) {
            return head;
        }
        
        ListNode newHead = new ListNode(0); 
        ListNode p = head;
        
        while(p != null) {
            ListNode t = newHead;
            while(t.next != null && t.next.val <= p.val) {
                t = t.next;
            }
            ListNode temp = p;
            p = p.next;
            temp.next = t.next;
            t.next = temp;
        }
        
        return newHead.next;
    }
}