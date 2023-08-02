// Problem statement:
/*
    Maximize/ minimize some condition on every subarray/substring of given size k
*/

int i=0,j=0; // start and end of the sliding window
while(j<n){
    // add j to window
    // ...
    if(j-i+1 < k) j++; // maintain the size
    else if(j-i+1 == k){
        // calculation and update answer
        // ...
        i++, j++; // slide the window
    }
}
