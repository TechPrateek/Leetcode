
class BrowserHistory {
public:
    struct Node {
        string data;
        Node* forward;
        Node* back;

        Node(string url) {
            data = url;
            forward = NULL;
            back = NULL;
        }
    };
    Node* current;
    BrowserHistory(string homepage) {
        current = new Node(homepage);
    }
    
    void visit(string url) {
        Node* newnode = new Node(url);

        current->forward = newnode;
        newnode->back = current;

        current = newnode;
    }
    
    string back(int steps) {
        while(steps){
            if(current->back) current=current->back;
            else{
                break;
            }
            steps--;

        }
        return current->data;
    }
    
    string forward(int steps) {
         while(steps){
            if(current->forward) current=current->forward;
            else{
                break;
            }
            steps--;

        }
        return current->data;
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */