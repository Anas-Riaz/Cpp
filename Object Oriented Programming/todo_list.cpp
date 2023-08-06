#include<iostream>
#include<string>

using namespace std;

class node{
    private:
        int data;
        string name;
        node* next; 
    
    public:
        node();
        node(int data, string name);
        node(const node& new_node);
        node* linking_head(node**head_node, int data, string name);
        node* linking_before_head(node** head_node, int data, string name);
        node* linking_at_tail(node* tail,  int data, string name);
        void set_data(int data);
        void set_name(string name);
        
};