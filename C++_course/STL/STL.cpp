#include <array>

/*
Containers:

simple - sequence - associative        - unordered         - adapter

pair   - array      - Map               - unordered Map    - Stack
       - Vector     - Multimap          - unordered set    - Queue
       - Deque      - set & multiset                       - priority queue
       - List
       - Forward List


Vector: A dynamic array that can grow or shrink in size. It provides fast access to elements and supports random access.

Deque: Double-ended queue, similar to a vector, but allows insertion and deletion at both ends with efficient random access.

List: A doubly-linked list that allows for fast insertion and deletion of elements anywhere in the list but has slower access times.


Iterators:
Iterators are objects that allow the traversal of elements in a container.

Begin(): Returns an iterator pointing to the first element.
End(): Returns an iterator pointing one past the last element.
*/

//Examples
/*
Vector:
Dynamic array that can resize itself automatically.
Access elements using index.

#include <vector>
std::vector<int> myVector = {1, 2, 3, 4, 5};

List:
Doubly linked list.
Efficient insertion and deletion at any position.

#include <list>
std::list<int> myList = {1, 2, 3, 4, 5};

Deque:
Double-ended queue.
Allows fast insertion and deletion at both ends.

#include <deque>
std::deque<int> myDeque = {1, 2, 3, 4, 5};

Queue:

FIFO (First In, First Out) data structure.

#include <queue>
std::queue<int> myQueue;
myQueue.push(1);
myQueue.push(2);

Stack:
LIFO (Last In, First Out) data structure.

#include <stack>
std::stack<int> myStack;
myStack.push(1);
myStack.push(2);

Algorithms:
STL provides a variety of algorithms that operate on containers. Here are some examples:

Sorting:
sort(), stable_sort(), partial_sort()

#include <algorithm>
std::sort(myVector.begin(), myVector.end());

Searching:
find(), binary_search(), lower_bound(), upper_bound()

#include <algorithm>
auto it = std::find(myVector.begin(), myVector.end(), 3);

Transformations:
transform(), fill(), copy()

#include <algorithm>
std::transform(myVector.begin(), myVector.end(), myVector.begin(), [](int x) { return x * 2; });

Iterators:
Iterators are objects that allow the traversal of a container. They act as a generalization of pointers.

Begin and End:
begin(): Returns an iterator pointing to the first element.
end(): Returns an iterator pointing to one past the last element.

auto it = myVector.begin();

Advance and Distance:
advance(): Moves the iterator forward or backward by a specified number of steps.
distance(): Returns the number of elements between two iterators.

std::advance(it, 2);
int dist = std::distance(myVector.begin(), it);
*/

