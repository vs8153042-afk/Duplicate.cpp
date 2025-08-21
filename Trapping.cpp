#include <iostream>
using namespace std;
int trap(int height[], int n) {
    int leftMax[n], rightMax[n];
    int water = 0;
    leftMax[0] = height[0];
    for(int i = 1; i < n; i++) {
        leftMax[i] = max(leftMax[i-1], height[i]);
    }
    rightMax[n-1] = height[n-1];
    for(int i = n-2; i >= 0; i--) {
        rightMax[i] = max(rightMax[i+1], height[i]);
    }
    for(int i = 0; i < n; i++) {
        water += min(leftMax[i], rightMax[i]) - height[i];
    }
    return water;
}
int main() {
    int height[] = {0,1,0,2,1,0,1,3,2,1,2,1};
    int n = sizeof(height)/sizeof(height[0]);
    cout << "Trapped Water = " << trap(height, n);
    return 0;
}
