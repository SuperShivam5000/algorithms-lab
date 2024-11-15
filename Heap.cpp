#include <iostream>
#include <vector>
using namespace std;

class MaxHeap{
    private:
    int _size{};
    vector<int> vect = {-1};

    int p(int i){
        return i/2;
    }
    int l(int i){
        return i*2;
    }
    int r(int i){
        return (i*2+1);
    }
    public:
    bool isEmpty(){
        if(_size==0) return true;
        else return false;
    }
    int getMax(){
        return vect[1];
    }
    void insertItem(int val);
    void shiftUp(int i);
    int extractMax();
    void shiftDown(int i);
};

void MaxHeap::shiftUp(int i){
    if(i>_size) return;
    if(i==1) return;
    if(vect[i]>vect[p(i)]){
        swap(vect[p(i)],vect[i]);
    }
    shiftUp(p(i));
}

void MaxHeap::insertItem(int val){
    if(_size+1>=vect.size()){
        vect.push_back(0);
    }
    vect[++_size]=val;
    shiftUp(_size);
    return;
}
void MaxHeap::shiftDown(int i){
    if(i>_size) return;
    int swapId = i;
    if(l(i)<=_size&&vect[i]<vect[l(i)]){
        swapId=l(i); //resume from 14:37
    }
    if(r(i) <= _size && vect[swapId]<vect[r(i)] ){
        swapId=r(i);
    }
    if(swapId != i){
        std::swap(vect[i],vect[swapId]);
        shiftDown(swapId);
    }
    return;
}

int MaxHeap::extractMax(){
    int maxNum = vect[1];
    std::swap(vect[1],vect[_size--]);
    shiftDown(1);
    return maxNum;
}

int main(){
    MaxHeap* PriorityQueue = new MaxHeap();
    if(PriorityQueue->isEmpty()){
        cout<<"Yes correct answer"<<endl;
    } else {
        cout<<"We have problem with function"<<endl;
    }
        PriorityQueue->insertItem(10);
        PriorityQueue->insertItem(120);
        PriorityQueue->insertItem(34);
        PriorityQueue->insertItem(41);
        PriorityQueue->insertItem(5);
        cout<<PriorityQueue->getMax()<<endl;
        PriorityQueue->extractMax();
        cout<<PriorityQueue->getMax()<<endl;
        if(PriorityQueue->isEmpty()){
            cout<<"We have problem with function"<<endl;
        } else {
            cout<<"Yes correct answer"<<endl;
        }
        return 0;
}