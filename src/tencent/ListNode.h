//
// Created by Ze1al on 2021/2/7.
//

#ifndef ALGORITHM_CPP_LISTNODE_H
#define ALGORITHM_CPP_LISTNODE_H

#endif //ALGORITHM_CPP_LISTNODE_H


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x): val(x), next(nullptr) {}
    ListNode(int x, ListNode *next): val(x), next(next) {}
};