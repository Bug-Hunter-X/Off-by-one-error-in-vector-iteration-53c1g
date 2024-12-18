# Off-by-One Error in Vector Iteration

This repository demonstrates a common off-by-one error in C++ when iterating through a `std::vector`. The error arises from incorrectly accessing elements beyond the valid index range of the vector.

## Bug Description
The `bug.cpp` file contains code that attempts to iterate through a vector using a loop. However, the loop condition `i <= myVector.size()` causes an out-of-bounds access because valid indices range from 0 to `myVector.size() - 1`.

## Solution
The `bugSolution.cpp` file shows the corrected code.  The loop condition is changed to `i < myVector.size()` to prevent accessing elements beyond the vector's bounds.

This example highlights the importance of careful index checking when working with arrays and vectors in C++ to avoid common runtime errors.