public ListNode insertionSortList(ListNode head) {      
    
        if (head == null)
            return null;
        if (head.next == null) {
            return head;
        }
        ListNode first = head;
        ListNode testNode = head;

        while (testNode.next != null) {
            ListNode insertNode = testNode.next;
            
            if (testNode.val <= insertNode.val) {
                testNode = testNode.next;
                continue;
            }
            
            if (insertNode.val <= first.val) {
                testNode.next = insertNode.next;
                insertNode.next = first;
                first = insertNode;
                continue;
            }

            for (ListNode pointer = first; pointer != testNode; pointer = pointer.next) {
                if (pointer.val <= insertNode.val
                        && insertNode.val <= pointer.next.val) {
                    testNode.next = insertNode.next;
                    insertNode.next = pointer.next;
                    pointer.next = insertNode;
                    break;
                }
            }
        }

        return first;
    }

    