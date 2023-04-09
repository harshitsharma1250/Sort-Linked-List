 vector<int> vec ;
        ListNode *ptr =head ;
        ListNode *ptr1 =head ;
        
        while(ptr!=NULL){
            vec.push_back(ptr->val) ;
            ptr =ptr->next ;
        }

        sort(vec.begin(),vec.end()) ;
        for(int i =0;i<vec.size();i++){
            ptr1->val = vec[i] ;
            ptr1=ptr1->next ;
        }
        return head ;
