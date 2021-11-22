#include <iostream>
using namespace std;

int binarySearch(int itemList[], int item);
 
int main() {
    int itemList[] = {1, 3, 5, 7, 9};
    int ret1 = binarySearch(itemList, 3);
    int ret2 = binarySearch(itemList, -1);
    assert(ret1==1);
    assert(ret2==-1);
    printf("test 1 %d\n", ret1);
    printf("test 2 %d\n", ret2);
    return 0;
}

int binarySearch(int itemList[], int item) {
    int low = 0;
    int high = (sizeof(itemList)/sizeof(itemList[0])) - 1;

    while (low <= high) {
        int mid = int((low + high) / 2);
        int guess = itemList[mid];

        if (guess == item){
            return mid;
        }

        if (guess > item) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return -1;

}