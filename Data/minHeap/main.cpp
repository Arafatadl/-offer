#include <iostream>
#include <assert.h>
using namespace std;
template <typename Item>
class MinHeap{
private:
    Item* data;
    int count;
    int* indexes;
    int capacity;
    void shiftUp(int k){
        while( k>1 && data[indexes[k]] <data[indexes[k/2]]) {
            swap(indexes[k],indexes[k/2]);
            k /= 2;
        }
    }
    void shiftDown(int k){
        while(k*2<=count) {
            int j = k * 2;
            if (j + 1 <= count&&data[indexes[j]]>data[indexes[j+1]])
                j+=1;
            if(data[indexes[k]]<data[indexes[j]])
                break;
            swap(data[k],data[j]);
            k*=2;
        }
    }
public:
    MinHeap(int capacity){
        data=new Item[capacity+1];
        indexes=new int[capacity+1];
        count=0;
        this->capacity=capacity;
    }
    ~MinHeap(){
        delete[] data;
        delete[] indexes;
    }
    int size(){
        return count;
    }
    bool isEmpty(){
        return count==0;
    }
    void insert(int i,Item item){
        assert(count + 1 <=capacity);
        assert(i + 1 >= 1 && i+1 <=capacity);
        i+=1;
        data[i]=item;
        indexes[count+1]=i;
        count++;
        shiftUp(count);
    }
    Item extractMin(){
        Item ret =data[1];
        swap(data[count],data[1]);
        count--;
        shiftDown(1);

        return ret;
    }
    void show(){
        for (int i = 1; i <=size(); ++i) {
            cout<<data[i]<<" ";
        }cout<<endl;
    }
};

int main() {
    MinHeap<int> heap =MinHeap<int>(100);
    cout<<heap.size()<<endl;

   // srand(time(NULL));
    for (int i = 10; i >0; --i) {
       // heap.insert(rand()%100);
    //   heap.insert(i);
    }
    //heap.show();
   // heap.extractMin();
   // heap.show();
    return 0;
};