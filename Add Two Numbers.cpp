ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head , *tail, *tmp;
        int sum = l1->val+l2->val;
        int carry = sum/10;
        head = new ListNode(sum%10);
        tail = head;
        while(l1->next!=NULL && l2->next!=NULL)
        {
            l1 = l1->next;
            l2 = l2->next;
            sum = l1->val+l2->val+carry;
            carry = sum/10;
            tmp = new ListNode(sum%10);
            tail->next = tmp;
            tail = tmp;
        }
        if(l1->next==NULL)
            l1 = l2;
        while(l1->next!=NULL)
        {
            l1 = l1->next;
            sum = l1->val+carry;
            carry = sum/10;
            tmp = new ListNode(sum%10);
            tail->next = tmp;
            tail = tmp;
        }

        if(carry)
        {
            tmp = new ListNode(carry);
            tail->next = tmp;
            tail = tmp;
        }
        return head;
    }
