#include <iostream>
#include <array>

using namespace std;
int findsmall(int list[], int small, int iter, int length);

int main() {
    cout << "Hello, User!" << endl;
    int list[] = {5,2,10,11,3,13,1,-5};
    int small = list[0];
    int size = *(&list + 1) - list;
    int smallest = findsmall(list, small, 0, size);
    cout << "Smallest number: " << smallest << endl;
    return 0;
}

int findsmall(int list[], int small, int iter, int length){
    if(length == 0)
        return NULL;
    else if(iter == length)
        return small;
    else if(list[iter] < small){
        small = list[iter];
        return findsmall(list, small, iter+1, length);
    }
    else
        return findsmall(list, small, iter+1, length);
}