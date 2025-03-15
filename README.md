# CSE5311-Hands-On-8
## ith Order Statistic Implementation
### To Compile:
```
cd implementation/ith_order_statistic/
make
```
### To Run:
```
./ith_order_stat
```
### Input:
prompt:
```
Array: { 557,  811,  650,  147,  319,  844,  439,  767,  279,  643,  51,  33,  3,  135,  938,  321,  722,  9,  787,  149,  32,  447,  569,  484,  468,  352,  540,  54,  66,  961,  294,  791,  993,  746,  825,  742,  856,  337,  315,  511,  930,  817,  544,  713,  630,  710,  665,  878,  709,  425}
Input which ith order statistic you would like to see (by default will be 1st):
```
Enter any integer from 1 to 50. Entering an integer outside of those bounds will default to 1st order statistic.
### Example Output:
```
Array: { 557,  811,  650,  147,  319,  844,  439,  767,  279,  643,  51,  33,  3,  135,  938,  321,  722,  9,  787,  149,  32,  447,  569,  484,  468,  352,  540,  54,  66,  961,  294,  791,  993,  746,  825,  742,  856,  337,  315,  511,  930,  817,  544,  713,  630,  710,  665,  878,  709,  425}
Input which ith order statistic you would like to see (by default will be 1st): 36
36th order statistic of the Array is 742
```

## Simple Data Structure Implementation
### To Compile:
```
cd implementation/simple_data_structures
make
```
### To Run:
```
./ds
```
### Output:
```
=== Stack Demonstration ===
Empty: Y

Pushing items 1-10

Empty: N
Stack Data: (top) = 10, 9, 8, 7, 6, 5, 4, 3, 2, 1
1st Pop: 10
2nd Pop: 9
Stack Data: (top) = 8, 7, 6, 5, 4, 3, 2, 1
Stack Peek: 8
Stack Data: (top) = 8, 7, 6, 5, 4, 3, 2, 1
Pushing 99
Stack Data: (top) = 99, 8, 7, 6, 5, 4, 3, 2, 1

Popping all items... 99 8 7 6 5 4 3 2 1 

Empty: Y
Stack Data: (top) = (Empty)

=== Queue Demonstration ===
Empty: Y

Enqueueing items 1-10

Empty: N
Queue Data: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
1st Dequeue: 1
2nd Dequeue: 2
Queue Data: 3, 4, 5, 6, 7, 8, 9, 10
Enqueueing 99
Queue Data: 3, 4, 5, 6, 7, 8, 9, 10, 99

Dequeueing all items... 3 4 5 6 7 8 9 10 99 

Empty: Y
Queue Data: (Empty)

=== Linked List Demonstration ===
Linked List Data: [ NULL ]
Searching 99... Not Found
Removing 99... List is empty

Inserting values 1-10

Linked List Data: [ 10 ] -> [ 9 ] -> [ 8 ] -> [ 7 ] -> [ 6 ] -> [ 5 ] -> [ 4 ] -> [ 3 ] -> [ 2 ] -> [ 1 ] -> [ NULL ]
Searching 4... Found!
Removing 4... Removed successfully

Linked List Data: [ 10 ] -> [ 9 ] -> [ 8 ] -> [ 7 ] -> [ 6 ] -> [ 5 ] -> [ 3 ] -> [ 2 ] -> [ 1 ] -> [ NULL ]
Searching -3... Not Found
Removing -3... Could not find -3

Linked List Data: [ 10 ] -> [ 9 ] -> [ 8 ] -> [ 7 ] -> [ 6 ] -> [ 5 ] -> [ 3 ] -> [ 2 ] -> [ 1 ] -> [ NULL ]
Searching 10... Found!
Removing 10... Removed successfully

Linked List Data: [ 9 ] -> [ 8 ] -> [ 7 ] -> [ 6 ] -> [ 5 ] -> [ 3 ] -> [ 2 ] -> [ 1 ] -> [ NULL ]
Searching 1... Found!
Removing 1... Removed successfully

Linked List Data: [ 9 ] -> [ 8 ] -> [ 7 ] -> [ 6 ] -> [ 5 ] -> [ 3 ] -> [ 2 ] -> [ NULL ]
Searching 6... Found!
Removing 6... Removed successfully

Linked List Data: [ 9 ] -> [ 8 ] -> [ 7 ] -> [ 5 ] -> [ 3 ] -> [ 2 ] -> [ NULL ]
Inserting 99
Linked List Data: [ 99 ] -> [ 9 ] -> [ 8 ] -> [ 7 ] -> [ 5 ] -> [ 3 ] -> [ 2 ] -> [ NULL ]
```
