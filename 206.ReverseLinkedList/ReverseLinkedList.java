package reverse_linked_list_206;

public class ReverseLinkedList {

    public class ListNode {
        int val;
        ListNode next;
        ListNode() {}
        ListNode(int val) { this.val = val; }
        ListNode(int val, ListNode next) { this.val = val; this.next = next; }
    }

    public ListNode reverseList(ListNode head){

        ListNode next = null;
        ListNode prev = null;

        while(head != null){

            next = head.next;
            head.next = prev;
            prev = head;
            head = next;

        }

        head = prev;
        return prev;

    }
}
