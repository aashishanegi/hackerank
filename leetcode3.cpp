// Brute-Force approach to find majority element in an array
 #include <bits/stdc++.h>
using namespace std;
  
// Function to find Majority element
// in an array
void majorityElement(int arr[], int n)
{
    int maxCount = 0;
    int index = -1;
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }
  
        // update maxCount if count of
        // current element is greater
        if (count > maxCount) {
            maxCount = count;
            index = i;
        }
    }
  
    // if maxCount is greater than n/2
    // return the element
    if (maxCount > n / 2)
        cout << arr[index] << endl;
  
    else
        cout << "nil" << endl;
}
  
// Main method
int main()
{
    int a,i;
    cin>>a;
    int arr[a];
    for(i=0;i<a;i++){
        cin>>arr[i];
    }
    
    int n = sizeof(arr) / sizeof(arr[0]);
  
    // call the function
    majorityElement(arr, n);
  
    return 0;
}
