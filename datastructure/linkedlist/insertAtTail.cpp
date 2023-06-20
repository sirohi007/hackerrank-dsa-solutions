SinglyLinkedListNode* getTail(SinglyLinkedListNode* head) {
    if(head == nullptr){
        return head;
    }
    while(head->next != nullptr){
        head = head->next;
    }
    return head;
}

SinglyLinkedListNode* newNode(int data){
    return new SinglyLinkedListNode(data);
}

SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    if(head == nullptr){
        return newNode(data);
    }
    
    //find tail
    SinglyLinkedListNode* tail = getTail(head);
    tail->next = newNode(data);
    return head;
}
