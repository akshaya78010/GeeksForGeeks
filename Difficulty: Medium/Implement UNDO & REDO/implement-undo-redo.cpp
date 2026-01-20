class Solution {
  public:
    string str = "";
    string temp = "";
    int n = 0;
    void append(char x) {
        // append x into document
        str += x;
        n+=1;
    }

    void undo() {
        // undo last change
        if(n > 0){
        temp = str[n-1] + temp;
        str.erase(str.end()-1);
        n-=1;
        }
    }

    void redo() {
        // redo changes
        if(temp.size() > 0){
        str += temp[0];
        temp.erase(temp.begin());
        n+=1;
        }
    }

    string read() {
        // read the document
        return str;
    }
};