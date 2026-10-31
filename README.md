# BENCHMARKS
This is a project that tells about the time complexity of insert pushback and search operations For insert and search time complexities are O(n) and for pushback it is O(1) i.e remains constant irrespective of input size This is well proven and we can see it in our data
push back operation has to add element at last which nonetheless should remain constant Here we had to use reserve before checking time for push back because push back had to create a new vector with 2n elements and copy everything there so the time we were getting was actually of creating new vector also rather than just time required for appending
insert has to move every element by 1 space to create space for new element at start thats why it is O(n) and search is searching for -1 which is not there so it has to check every element thats why it is also O(n)
In theory Using linked list is better for inserts at start using push_front , it follows O(1) but its slow for jumping at any position
results for vector are PUSH BACK time is 37 nanoseconds INSERT time is 191 nanoseconds SEARCH time is 1917 nanoseconds CASE 2 PUSH BACK time is 33 nanoseconds INSERT time is 7700 nanoseconds SEARCH time is 163834 nanoseconds CASE 3 PUSH BACK time is 37 nanoseconds INSERT time is 77525 nanoseconds SEARCH time is 1606041 nanoseconds
 Compiling command is g++ -O2 benchmark.cpp -o main
