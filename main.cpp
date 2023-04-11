//
//  main.cpp
//  CS 232 Linked List
//
//  Created by Melissa Gio on 3/27/23.
//

#include <iostream>

using namespace std;

struct agesNode {
    int age;    //item of the node
    agesNode* link;     //link to another node
};

int main() {
    //declarations
    int numOfAges;
    int cnt;
    agesNode* head = new agesNode; //creating a node and calling it head
    agesNode* nextAgeNode = new agesNode;
    nextAgeNode = head; //same thing just being referred to different names
    
    
    //get user input
    cout << "How many ages are you going to enter: "; //asking user how many ages they want to input
    cin >> numOfAges;
    
    //calculations
    for (int i = 0; i < numOfAges; i++) {
        if (i > 0) {
            nextAgeNode->link = new agesNode; //-> is used to access members in a node.
            //telling it to point to a new node
            nextAgeNode = nextAgeNode->link;
            //nextAgeNode will be what you are pointing to
            nextAgeNode->link = nullptr;
            //
        }
        cout << "Enter age " << (i + 1) << ": ";
        cin >> nextAgeNode->age;
        //assiging the input of the user into the age member of the nextagenode
        //displaying the ages they input
        
        /*
         N.A.N      N.A.N
         head
         -----     -------
        |  10  | ->|   20   | -> | nullptr
         if we type in 10 then 20 and then another number
         */

    }
    
    //output
    //traverse through the linked list
    
    cout << endl << "Traversing the linked list" << endl;
    
    nextAgeNode = head;
    cnt = 1;
    while (nextAgeNode != nullptr) {
        cout << "Age " << cnt << ": " << nextAgeNode-> age << endl; //we want the age in the nextagenode bc that is what has the number
        nextAgeNode = nextAgeNode->link;    //nextagenode will now be what it is pointing to
        cnt+=1; //counter will now go to the next number
        
        
    }
    
    //manual memory management
    //delete all of the nodes
    nextAgeNode = head; //head is at the beginning so we are setting the nextagenode back to the first node
    while (nextAgeNode != nullptr) {
        agesNode* nodeToDelete = nextAgeNode;
        nextAgeNode = nextAgeNode->link; //nextagenode will now be what it is pointing to
        delete nodeToDelete;
        nodeToDelete = nullptr;
        
        
    }
    
    
    
    return 0;
}
