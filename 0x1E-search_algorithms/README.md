<h1>Search Algorithms</h1>
<h2>Tasks</h2>

<h3>0-linear.c</h3>
function that searches for a value in an array of integers using the Linear search algorithm

Prototype : int linear_search(int pointer(array), size_t size, int value);
Where array is a pointer to the first element of the array to search in
size is the number of elements in array
And value is the value to search for
Your function must return the first index where value is located
If value is not present in array or if array is NULL, your function must return -1
Every time you compare a value in the array to the value you are searching, you have to print this value 

<h3>1-binary.c</h3>

function that searches for a value in a sorted array of integers using the Binary search algorithm

Prototype : int binary_search(int *array, size_t size, int value);
- Where array is a pointer to the first element of the array to search in
- size is the number of elements in array
- And value is the value to search for
- Your function must return the index where value is located
- You can assume that array will be sorted in ascending order
- You can assume that value won’t appear more than once in array
- If value is not present in array or if array is NULL, your function must return -1
- You must print the array being searched every time it changes. (e.g. at the beginning and when you search a subarray)

<h3>2-O</h3>
the time complexity (worst case) of a linear search in an array of size n?

<h3>3-O</h3>
space complexity (worst case) of an iterative linear search algorithm in an array of size n?

<h3>4-O</h3>
the time complexity (worst case) of a binary search in an array of size n?

<h3>5-O</h3>
the space complexity (worst case) of a binary search in an array of size n?

<h3>6-O</h3>

the space complexity of this function algorithm?

<h3>100-jump.c</h3>

function that searches for a value in a sorted array of integers using the Jump search algorithm

Prototype : int jump_search(int pointerarray, size_t size, int value);

- Where array is a pointer to the first element of the array to search in
- size is the number of elements in array
- And value is the value to search for
- Your function must return the first index where value is located
- You can assume that array will be sorted in ascending order
- If value is not present in array or if array is NULL, your function must return -1
- You have to use the square root of the size of the array as the jump step.
- You can use the sqrt() function included in <math.h> (don’t forget to compile with -lm)
- Every time you compare a value in the array to the value you are searching for, you have to print this value 

<h3>101-O</h3>

the time complexity (average case) of a jump search in an array of size n, using step = sqrt(n)?

<h3>102-interpolation.c</h3>

function that searches for a value in a sorted array of integers using the Interpolation search algorithm

Prototype : int interpolation_search(int *array, size_t size, int value);
- Where array is a pointer to the first element of the array to search in
- size is the number of elements in array
- And value is the value to search for
- Your function must return the first index where value is located
- You can assume that array will be sorted in ascending order
- If value is not present in array or if array is NULL, your function must return -1
- To determine the probe position, you can use : size_t pos = low + (((double)(high - low) / (array[high] - array[low])) times (value - array[low]))
- Every time you compare a value in the array to the value you are searching, you have to print this value

<h3>103-exponential.c</h3>

function that searches for a value in a sorted array of integers using the Exponential search algorithm

Prototype : int exponential_search(int *array, size_t size, int value);
- Where array is a pointer to the first element of the array to search in
- size is the number of elements in array
- And value is the value to search for
- Your function must return the first index where value is located
- You can assume that array will be sorted in ascending order
- If value is not present in array or if array is NULL, your function must return -1
- You have to use powers of 2 as exponential ranges to search in your array
- Every time you compare a value in the array to the value you are searching for, you have to print this value (See example)
- Once you’ve found the good range, you need to use a binary search:
- Every time you split the array, you have to print the new array (or subarray) you’re searching in

<h3>104-advanced_binary.c</h3>

You may have noticed that the basic binary search does not necessarily return the index of the first value in the array (if this value appears more than once in the array). In this exercise, you’ll have to solve this problem.

Write a function that searches for a value in a sorted array of integers.

Prototype : int advanced_binary(int *array, size_t size, int value);
- Where array is a pointer to the first element of the array to search in
- size is the number of elements in array
- And value is the value to search for
- Your function must return the index where value is located
- You can assume that array will be sorted in ascending order
- If value is not present in array or if array is NULL, your function must return -1
- Every time you split the array, you have to print the new array (or subarray) you’re searching in (See example)
- You have to use recursion. You may only use one loop (while, for, do while, etc.) in order to print the array
<h3>105-jump_list.c</h3>
function that searches for a value in a sorted list of integers using the Jump search algorithm.

Prototype : listint_t *jump_list(listint_t *list, size_t size, int value);
- Where list is a pointer to the head of the list to search in
- size is the number of nodes in list
- And value is the value to search for
- Your function must return a pointer to the first node where value is located
- You can assume that list will be sorted in ascending order
- If value is not present in head or if head is NULL, your function must return NULL
- You have to use the square root of the size of the list as the jump step.
- You can use the sqrt() function included in <math.h> (don’t forget to compile with -lm)
- Every time you compare a value in the list to the value you are searching, you have to print this value 
<h3>106-linear_skip.c</h3>

As you see now, looking for a specific value in a singly linked list always leads to browse every element of the list. A common way to optimize the time complexity of a search in a singly linked list is to modify the list itself by adding an “express lane” to browse it. A linked list with an express lane is called a skip list. This change does not come without consequences. Indeed, the space complexity of a search in this kind of list will grow as sizeof(skiplist_t) > sizeof(listint_t)

function that searches for a value in a sorted skip list of integers.

Prototype : skiplist_t *linear_skip(skiplist_t *list, int value);
- Where list is a pointer to the head of the skip list to search in
- A node of the express lane is placed every index which is a multiple of the square root of the size of the list (see example below)
- And value is the value to search for
- You can assume that list will be sorted in ascending order
- Your function must return a pointer on the first node where value is located
- If value is not present in list or if head is NULL, your function must return NULL
- Every time you compare a value in the list to the value you are searching, you have to print this value
[see here function](github.com/holbertonschool/0x1D.c/tree/master/skiplist)

Prototype : skiplist_t *linear_skip(skiplist_t *list, int value);
- Where list is a pointer to the head of the skip list to search in
- A node of the express lane is placed every index which is a multiple of the square root of the size of the list (see example below)
- And value is the value to search for
- You can assume that list will be sorted in ascending order
- Your function must return a pointer on the first node where value is located
- If value is not present in list or if head is NULL, your function must return NULL
- Every time you compare a value in the list to the value you are searching, you have to print this value
<h3>107-O</h3>
the time complexity (average case) of a jump search in a singly linked list of size n, using step = sqrt(n)?
<h3>108-O</h3>
the time complexity (average case) of a jump search in a skip list of size n, with an express lane using step = sqrt(n)?
