#include <iostream>
using namespace std;

class solution{
public:
    void static relaceSpace(char *str,int length){

        string box(str);
        for(int i=0; i<box.size(); i++){
            if(box[i]==' ') {
                box.erase(i, 1);
                box.insert(i+1,"%20");
                i=i+3;
            }
        }
       str=;
    }

};


int main() {

    //string str = "We are student";
    char *p = "We are student";

    solution::relaceSpace(p,14);
    cout <<p<< endl;
    return 0;
}